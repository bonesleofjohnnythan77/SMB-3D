import os
import shutil
from pathlib import Path

def process_model_folders(root_directory):
    """
    Process all model folders by combining textureNew.inc.c content with model.inc.c
    and then deleting the texture file.
    """
    root_path = Path(root_directory)
    
    # Find all model folders that contain both required files
    model_folders = []
    for folder in root_path.rglob('*'):
        if folder.is_dir():
            texture_file = folder / 'textureNew.inc.c'
            model_file = folder / 'model.inc.c'
            if texture_file.exists() and model_file.exists():
                model_folders.append(folder)
    
    print(f"Found {len(model_folders)} model folders to process")
    
    # Process each folder
    for folder in model_folders:
        texture_file = folder / 'textureNew.inc.c'
        model_file = folder / 'model.inc.c'
        
        try:
            # Read the content of both files
            with open(texture_file, 'r', encoding='utf-8') as f:
                texture_content = f.read()
            
            with open(model_file, 'r', encoding='utf-8') as f:
                model_content = f.read()
            
            # Combine the content (texture first, then model)
            combined_content = texture_content + '\n\n' + model_content
            
            # Write the combined content back to model file
            with open(model_file, 'w', encoding='utf-8') as f:
                f.write(combined_content)
            
            # Delete the texture file
            texture_file.unlink()
            
            print(f"✓ Processed: {folder.name}")
            
        except Exception as e:
            print(f"✗ Error processing {folder.name}: {str(e)}")
    
    print(f"\nProcessing complete! {len(model_folders)} folders processed.")

def main():
    # Get the directory to process
    directory = input("Enter the path to the root directory containing model folders: ").strip()
    
    if not directory:
        directory = '.'  # Current directory if none provided
    
    if not os.path.exists(directory):
        print(f"Error: Directory '{directory}' does not exist!")
        return
    
    # Confirm with user
    print(f"\nThis will process all model folders in: {os.path.abspath(directory)}")
    print("For each folder, it will:")
    print("1. Copy content from textureNew.inc.c")
    print("2. Prepend it to model.inc.c with spacing")
    print("3. Delete textureNew.inc.c")
    
    confirm = input("\nDo you want to continue? (y/N): ").strip().lower()
    
    if confirm == 'y':
        process_model_folders(directory)
    else:
        print("Operation cancelled.")

if __name__ == "__main__":
    main()