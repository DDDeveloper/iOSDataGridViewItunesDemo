#import "FLXSVersion.h"
#import "FLXSClassFactory.h"

@interface FLXSFactoryKey : NSObject
{

}

@property (nonatomic, strong) FLXSClassFactory * factory;
@property (nonatomic, strong) FLXSClassFactory * subFactory;

- (id)initWithFactory:(FLXSClassFactory *)factory andSubFactory:(FLXSClassFactory *)subFactory;

@end

