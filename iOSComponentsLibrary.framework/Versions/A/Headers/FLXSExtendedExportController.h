#import "FLXSExportController.h"
#import "FLXSVersion.h"

@class FLXSFlexDataGridColumnLevel;

@interface FLXSExtendedExportController : FLXSExportController
{
}

@property (nonatomic, assign) float DEFAULT_TABLE_WIDTH;
@property (nonatomic, strong) FLXSFlexDataGrid* grid;
@property (nonatomic, strong) FLXSExportOptions* exportOptions;

+(FLXSExtendedExportController*)instance;

-(void)doExport;

- (void)runExport:(NSArray *)iCollectionView allOrSelectedPages:(BOOL)allOrSelectedPages;

- (void)runNestedExport:(NSArray *)iCollectionView level:(FLXSFlexDataGridColumnLevel *)level;
-(int)getTotalRecords:(FLXSExporter*)exporter;
- (int)countLevels:(NSArray *)allRecords level:(FLXSFlexDataGridColumnLevel *)level;
- (NSString *)writeRecord:(NSObject *)obj level:(FLXSFlexDataGridColumnLevel *)level;
-(void)setExportLevel:(FLXSFlexDataGridColumnLevel*)level;

@end

