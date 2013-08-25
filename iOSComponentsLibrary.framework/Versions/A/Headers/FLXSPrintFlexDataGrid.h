#import "FLXSVersion.h"
#import "FLXSElasticContainer.h"
#import "FLXSFlexDataGrid.h"

@class FLXSPrintWindow;
@class FLXSFlexDataGridBodyContainer;
@class FLXSRowInfo;

@interface FLXSPrintFlexDataGrid : FLXSFlexDataGrid
{
}

@property (nonatomic, strong) FLXSPrintWindow* printWindow;
@property (nonatomic, assign) float totalPagesHeight;


-(FLXSFlexDataGridBodyContainer*)createBodyContainer;
-(NSArray*)printListItems;
-(void)setResizableColumns:(BOOL)val;
-(BOOL)validNextPage;
-(void)nextPage;
-(void)placeComponents:(FLXSRowInfo*)row;
-(void)showPositions:(NSArray*)positions;
-(float)headerHeight;
-(BOOL)enableHeightAutoAdjust;

@end

