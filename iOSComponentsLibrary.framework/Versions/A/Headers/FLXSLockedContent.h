#import "FLXSVersion.h"
@class FLXSFlexDataGrid;

@interface FLXSLockedContent : UIScrollView
{

}

@property (nonatomic, weak) FLXSFlexDataGrid* grid;


-(id)initWithGrid:(FLXSFlexDataGrid*)grid;
-(void)placeSection;

@end

