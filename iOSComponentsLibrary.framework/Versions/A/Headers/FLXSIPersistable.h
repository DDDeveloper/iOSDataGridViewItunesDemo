#import "FLXSPreferenceInfo.h"
#import "FLXSVersion.h"

@class FLXSGridPreferencesInfo;

@protocol FLXSIPersistable

@property (nonatomic, strong) NSString* preferencesToPersist;
@property (nonatomic, assign) BOOL enablePreferencePersistence;
@property (nonatomic, strong) NSString* preferencePersistenceMode;
@property (nonatomic, strong) NSString* preferencePersistenceKey;
@property (nonatomic, strong) NSString* preferences;

@property (nonatomic, assign) BOOL preferencesSet;
@property (nonatomic, assign) BOOL userPersistedColumnWidths;
@property (nonatomic, assign) BOOL useCompactPreferences;
@property (nonatomic, assign) BOOL preferencesLoaded;
@property (nonatomic, strong) NSString* userSettingsOptionsFunction;
@property (nonatomic, assign) BOOL enableMultiplePreferences;
@property (nonatomic, strong) FLXSGridPreferencesInfo* gridPreferencesInfo;
@property (nonatomic, strong) FLXSPreferenceInfo* currentPreference;
@property (nonatomic, assign) BOOL autoLoadPreferences;
@end

