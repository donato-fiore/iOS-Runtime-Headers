// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMATIONINFO_H
#define KNANIMATIONINFO_H

@class NSSet, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface KNAnimationInfo : NSObject {
    NSSet *_supportedCustomAttributeKeys;
}


@property (retain, nonatomic) Class animationClass; // ivar: _animationClass
@property (readonly, nonatomic) NSString *animationFilter;
@property (readonly, nonatomic) NSInteger category;
@property (readonly, nonatomic) NSDictionary *customAttributeDefaults;
@property (readonly, nonatomic) NSArray *customAttributes;
@property (readonly, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, nonatomic) NSUInteger directionType;
@property (readonly, nonatomic) NSString *effectIdentifier;
@property (readonly, nonatomic) BOOL isDrift;
@property (readonly, nonatomic) NSString *localizedActionBuildName;
@property (readonly, nonatomic) NSString *localizedBuildInName;
@property (readonly, nonatomic) NSString *localizedBuildOutName;
@property (readonly, nonatomic) NSString *localizedContentBuildName;
@property (readonly, nonatomic) NSString *localizedTransitionName;
@property (readonly, nonatomic) NSSet *supportedCustomAttributeKeys;
@property (retain, nonatomic) NSSet *validAnimationTypes; // ivar: _validAnimationTypes


+(id)effectIdentifiersForAnimationInfos:(id)arg0 ;
+(id)localizedEffectNamesForAnimationInfos:(id)arg0 animationType:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsAnimationType:(NSInteger)arg0 ;
-(BOOL)supportsCustomAttributeKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)customAttributesForAttributeKey:(id)arg0 ;
-(id)customEffectTimingCurveDisplayParametersForAttributes:(id)arg0 layoutStyleOnly:(BOOL)arg1 ;
-(id)description;
-(id)initWithAnimationClass:(Class)arg0 ;
-(id)localizedNameForType:(NSInteger)arg0 ;
-(id)thumbnailImageNameForType:(NSInteger)arg0 ;


@end


#endif