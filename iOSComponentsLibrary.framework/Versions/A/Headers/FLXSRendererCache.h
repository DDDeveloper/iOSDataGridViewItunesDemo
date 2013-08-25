#import "FLXSVersion.h"
@class FLXSClassFactory;
@class FLXSFactoryKey;
@class FLXSKeyValuePairCollection;
@class FLXSFlexDataGrid;

@interface FLXSRendererCache : NSObject
{
}

@property (nonatomic, strong) FLXSKeyValuePairCollection* dict;
@property (nonatomic, strong) FLXSKeyValuePairCollection* rendererFactories;
@property (nonatomic, strong) NSMutableArray* factoryKeys;
@property (nonatomic, weak) FLXSFlexDataGrid* grid;

-(id)initWithGrid:(FLXSFlexDataGrid*)grid;

- (NSObject *)popInstance:(FLXSClassFactory *)factory subFactory:(FLXSClassFactory *)subFactory;
-(void)pushInstance:(NSObject*)instance;

- (FLXSFactoryKey *)getFactoryKey:(FLXSClassFactory *)factory subFactory:(FLXSClassFactory *)subFactory;

@end

