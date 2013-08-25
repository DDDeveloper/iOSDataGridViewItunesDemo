#import "FLXSVersion.h"
#import "FLXSFlexDataGridVirtualBodyContainer.h"
@class FLXSFlexDataGrid;

@interface FLXSPrintFlexDataGridBodyContainer : FLXSFlexDataGridVirtualBodyContainer
{
}

@property (nonatomic, strong) NSArray* currentPositions;
-(id)initWithGrid:(FLXSFlexDataGrid*)grid;
-(void)showPositions:(NSArray*)positions;
-(BOOL)drawRows:(BOOL)forceFiller;
-(float)calculatedTotalHeight;

@end

