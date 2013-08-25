#import "FLXSIPager.h"
#import "FLXSVersion.h"

@class FLXSFlexDataGridColumnLevel;
@class FLXSRowInfo;

@protocol FLXSIExtendedPager<FLXSIPager>

@property (nonatomic,strong) FLXSFlexDataGridColumnLevel * level;
@property (nonatomic,strong) FLXSRowInfo * rowInfo;
@property (nonatomic,assign) BOOL dispatchEvents;


-(void)setStyle:(NSString*)styleProp :(id)value;
-(void)invalidateDisplayList;
-(void)initializePager;

//FLXSIEventDispatcher methods
-(void)dispatchEvent:(FLXSEvent *)event;

- (void)addEventListener:(NSString *)type target:(NSObject *)target handler:(SEL)handler;
-(void)removeEventListenerOfType:(NSString *)type fromTarget:(NSObject *)target usingHandler:(SEL)handler;
//End FLXSIEventDispatcher methods
@end

