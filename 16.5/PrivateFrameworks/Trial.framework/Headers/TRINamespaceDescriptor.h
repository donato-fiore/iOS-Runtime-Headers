// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRINAMESPACEDESCRIPTOR_H
#define TRINAMESPACEDESCRIPTOR_H

@class NSURL, NSString, NSSet;

#import <Foundation/Foundation.h>

#import "TRIAppContainer.h"

@interface TRINamespaceDescriptor : NSObject

@property (readonly, nonatomic) TRIAppContainer *appContainer; // ivar: _appContainer
@property (readonly, nonatomic) int cloudKitContainerId; // ivar: _cloudKitContainerId
@property (readonly, nonatomic) unsigned int downloadNCV; // ivar: _downloadNCV
@property (readonly, nonatomic) BOOL enableFetchDuringSetupAssistant; // ivar: _enableFetchDuringSetupAssistant
@property (readonly, nonatomic) BOOL expensiveNetworkingAllowed; // ivar: _expensiveNetworkingAllowed
@property (readonly, nonatomic) NSURL *factorsURL; // ivar: _factorsURL
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (readonly, nonatomic) int purgeabilityLevel; // ivar: _purgeabilityLevel
@property (readonly, nonatomic) NSString *resourceAttributionIdentifier; // ivar: _resourceAttributionIdentifier
@property (readonly, nonatomic) NSSet *upgradeNCVs; // ivar: _upgradeNCVs


+(BOOL)removeDescriptorWithNamespaceName:(id)arg0 fromDirectory:(id)arg1 ;
+(id)descriptorPathForNamespaceName:(id)arg0 fromDirectory:(id)arg1 ;
+(id)descriptorsForDirectory:(id)arg0 filterBlock:(id)arg1 ;
+(id)loadFromFile:(id)arg0 ;
+(id)loadWithNamespaceName:(id)arg0 fromDirectory:(id)arg1 ;
+(void)enumerateDescriptorsInDirectory:(id)arg0 block:(id)arg1 ;
-(BOOL)_isEqualToNamespaceDescriptor:(id)arg0 ;
-(BOOL)_upgradeNCVsArePositiveIntegers:(id)arg0 ;
-(BOOL)_upgradeNCVsIsValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeFromDirectory:(id)arg0 ;
-(BOOL)saveToDirectory:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionary;
-(id)factorsAbsolutePathAsOwner:(BOOL)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithNamespaceName:(id)arg0 downloadNCV:(unsigned int)arg1 optionalParams:(id)arg2 ;


@end


#endif