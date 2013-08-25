#import "FLXSVersion.h"
#import "FLXSFilter.h"
#import "FLXSEvent.h"

@interface FLXSFilterPageSortChangeEvent : FLXSEvent
{

}

@property (nonatomic, strong) FLXSFilter * filter;
@property (nonatomic, strong) FLXSEvent * triggerEvent;
@property (nonatomic, strong) NSString* cause;

-(id)initWithType:(NSString*)type :(FLXSFilter *)filter :(BOOL)bubbles :(BOOL)cancelable;
-(FLXSEvent *)clone;

+ (NSString *)FILTER_PAGE_SORT_CHANGE;
+ (NSString *)FILTER_CHANGE;
+ (NSString *)PAGE_CHANGE;
+ (NSString *)SORT_CHANGE;
+ (NSString *)DESTROY;
@end

