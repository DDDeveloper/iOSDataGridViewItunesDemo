#import "FLXSVersion.h"
#import "FLXSAdvancedFilter.h"
#import "FLXSEvent.h"

@interface FLXSExtendedFilterPageSortChangeEvent : FLXSEvent
{
}

@property (nonatomic, strong) FLXSEvent* triggerEvent;
@property (nonatomic, strong) FLXSAdvancedFilter* filter;
@property (nonatomic, strong) NSString* cause;

- (id)initWithType:(NSString *)type andFilter:(FLXSAdvancedFilter *)filter andBubbles:(BOOL)bubbles andCancelable:(BOOL)cancelable;
-(FLXSEvent*)clone;

+ (NSString*)FILTER_PAGE_SORT_CHANGE;
+ (NSString*)FILTER_CHANGE;
+ (NSString*)PAGE_CHANGE;
+ (NSString*)SORT_CHANGE;
+ (NSString*)ITEM_LOAD;
@end

