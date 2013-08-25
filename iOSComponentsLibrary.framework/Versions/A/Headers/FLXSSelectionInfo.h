#import "FLXSVersion.h"
@interface FLXSSelectionInfo : NSObject
{
}

@property (nonatomic, strong) NSMutableArray* levelSelections;
@property (nonatomic, assign) BOOL isSelectAll;

 -(BOOL)hasAnySelections;

@end

