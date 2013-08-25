#import "FLXSVersion.h"

@class FLXSComponentInfo;

@interface FLXSComponentAdditionResult : NSObject
{
}

@property (nonatomic, assign) BOOL horizontalSpill;
@property (nonatomic, assign) BOOL verticalSpill;
@property (nonatomic, strong) FLXSComponentInfo* componentInfo;


@end

