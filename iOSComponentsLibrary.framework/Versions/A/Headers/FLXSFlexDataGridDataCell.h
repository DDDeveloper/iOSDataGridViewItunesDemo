#import "FLXSVersion.h"
#import "FLXSFlexDataGridCell.h"
#import "FLXSIFlexDataGridDataCell.h"

@interface FLXSFlexDataGridDataCell : FLXSFlexDataGridCell     <FLXSIFlexDataGridDataCell>
{
}

@property (nonatomic, assign) int colSpan;
@property (nonatomic, assign) int rowSpan;

-(void)refreshCell;
-(float)getLeftPadding;

@end

