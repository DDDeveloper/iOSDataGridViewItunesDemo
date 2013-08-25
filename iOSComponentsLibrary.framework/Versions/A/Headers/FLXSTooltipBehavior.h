#import "FLXSVersion.h"
@class FLXSEvent;

@interface FLXSTooltipBehavior : NSObject
{

}

@property (nonatomic, strong) UIView* ownerComponent;
@property (nonatomic, strong) UIView* currentTooltip;
@property (nonatomic, strong) UIView* currentTooltipTrigger;
@property (nonatomic, strong) NSTimer* tooltipWatcher;
@property (nonatomic, assign) float tooltipWatcherTimeout;

-(id)initWithGrid:(UIView*)ownerComponent;

- (void)showTooltip:(UIView *)relativeTo tooltip:(UIView *)tooltip dataContext:(NSObject *)dataContext point:(Point *)point leftOffset:(float)leftOffset topOffset:(float)topOffset offScreenMath:(BOOL)offScreenMath where:(NSString *)where container:(NSObject *)container;
-(void)toolTipMoveHandler:(FLXSEvent*)event;
-(void)hideTooltip;

@end

