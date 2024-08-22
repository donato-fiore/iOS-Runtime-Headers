// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WAUTIL_H
#define WAUTIL_H


#import <Foundation/Foundation.h>


@interface WAUtil : NSObject



+(BOOL)isMacAddress:(id)arg0 ;
+(BOOL)storeToken:(id)arg0 withIdentifier:(id)arg1 ;
+(NSUInteger)getAWDTimestamp;
+(id)_generateInvocationForMethod:(*void)arg0 ;
+(id)_getBasePersistenceKeychainQuery;
+(id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg0 ;
+(id)deviceName;
+(id)getCopyOfMessage:(id)arg0 withNumericalValuesSubstractedByValuesInMessage:(id)arg1 ;
+(id)getMessageInstanceForKey:(id)arg0 andGroupType:(NSInteger)arg1 ;
+(id)getObscureKey;
+(id)getTokenForIdentifier:(id)arg0 ;
+(id)getValueForEntitlementForCurrentProcess:(id)arg0 ;
+(id)groupTypeToAWDComponentID;
+(id)groupTypeToString:(NSInteger)arg0 ;
+(id)rotateObscureKey;
+(id)rotateUUIDsForMessage:(id)arg0 ;
+(id)trimTokenForLogging:(id)arg0 ;
+(id)unobscureModelData:(id)arg0 forModelkey:(id)arg1 ;
+(void)addDeltaNSNumberForTelemetryKey:(id)arg0 dictKey:(id)arg1 dictModule:(id)arg2 telDict:(id)arg3 recentDict:(id)arg4 oldDict:(id)arg5 ;
+(void)incrementValueForKey:(id)arg0 inMutableDict:(id)arg1 ;
+(void)logNestedDictionary:(id)arg0 indent:(int)arg1 prefix:(id)arg2 ;
+(void)sumNSNumberForKey:(id)arg0 dstDict:(id)arg1 otherDict:(id)arg2 ;


@end


#endif