#import "FLXSVersion.h"
@class FLXSFlexDataGrid;

#import "FLXSGridBackground.h"

@interface FLXSElasticContainer : UIScrollView
{
}

@property (nonatomic, strong) UIScrollView* boundContainer;
@property (nonatomic, weak) FLXSFlexDataGrid* grid;
@property (nonatomic, strong) FLXSGridBackground* backgroundForFillerRows;

@property (nonatomic, strong) NSString* horizontalScrollPolicy;
@property (nonatomic, strong) NSString* verticalScrollPolicy;



-(id)initWithGrid:(FLXSFlexDataGrid*)grid;
-(void)setBackgroundFillerSize;

@end

