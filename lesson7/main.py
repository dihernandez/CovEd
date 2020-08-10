import to_import as exModule
import different_folder.to_import_hierarchy as hierarchy
import sys

sys.path.append("/Users/diher")
import to_import_full_path as full_path

my_inst = exModule.ToImport()
my_inst.set_val(9)
my_inst.print_val()

my_h_inst = hierarchy.ToImportHierarchy()

my_h_inst.print_val()

my_full_path = full_path.ToImportFP()

my_full_path.print_val()
