#import "FLXSVersion.h"
#import "FLXSFilter.h"
#import "FLXSFlexDataGridColumnLevel.h"
@interface FLXSAdvancedFilter : FLXSFilter
{
}

@property (nonatomic, strong) NSObject* parentObject;
@property (nonatomic, strong) FLXSFlexDataGridColumnLevel* level;


+(FLXSAdvancedFilter*)from:(FLXSFilter*)param;

+ (NSString*)ALL_ITEM;
@end

