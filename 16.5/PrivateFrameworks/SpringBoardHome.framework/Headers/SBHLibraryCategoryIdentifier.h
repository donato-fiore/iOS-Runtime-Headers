// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYCATEGORYIDENTIFIER_H
#define SBHLIBRARYCATEGORYIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBHLibraryCategoryIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _hash;
    NSString *_localizedDisplayName;
}


@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedDisplayNameKey; // ivar: _localizedDisplayNameKey
@property (readonly, nonatomic) NSUInteger predictionCategoryID; // ivar: _predictionCategoryID
@property (readonly, nonatomic) NSUInteger predictionCategoryIndex; // ivar: _predictionCategoryIndex


+(BOOL)supportsSecureCoding;
+(id)categoryWithLocalizedDisplayName:(id)arg0 categoryID:(NSUInteger)arg1 categoryIndex:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCategoryIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredictionCategory:(id)arg0 categoryIndex:(NSUInteger)arg1 ;
-(id)initWithPredictionCategoryID:(NSUInteger)arg0 categoryIndex:(NSUInteger)arg1 localizedDisplayName:(id)arg2 localizedDisplayNameKey:(id)arg3 ;
-(id)initWithPredictionCategoryID:(NSUInteger)arg0 localizedDisplayNameKey:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif