// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCOLLECTION_H
#define TPSCOLLECTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;


#import "TPSDocument.h"
#import "TPSAssets.h"
#import "TPSContent.h"
#import "TPSGradient.h"

@interface TPSCollection : TPSDocument <NSCopying, NSSecureCoding>



@property (copy, nonatomic) TPSAssets *collectionAssets; // ivar: _collectionAssets
@property (nonatomic) BOOL containsIntroTip; // ivar: _containsIntroTip
@property (nonatomic) NSInteger count;
@property (copy, nonatomic) NSString *countText; // ivar: _countText
@property (readonly, copy, nonatomic) TPSAssets *featuredAssets;
@property (copy, nonatomic) TPSContent *featuredContent; // ivar: _featuredContent
@property (readonly, copy, nonatomic) NSString *featuredText;
@property (readonly, copy, nonatomic) NSString *featuredTitle;
@property (copy, nonatomic) TPSGradient *gradient; // ivar: _gradient
@property (readonly, nonatomic) NSInteger priority;
@property (copy, nonatomic) NSString *shortTitle; // ivar: _shortTitle
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) TPSAssets *tileAssets;
@property (copy, nonatomic) TPSContent *tileContent; // ivar: _tileContent
@property (copy, nonatomic) NSArray *tipIdentifiers; // ivar: _tipIdentifiers
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) TPSAssets *tocAssets; // ivar: _tocAssets
@property (nonatomic, getter=isTopFeatured) BOOL topFeatured; // ivar: _topFeatured


+(BOOL)supportsSecureCoding;
+(id)collectionLabelForDictionary:(id)arg0 ;
+(id)collectionOrderIdentifierForDictionary:(id)arg0 ;
+(id)na_identity;
+(id)tipIdentifiersForDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHardwareWelcome;
-(BOOL)isSoftwareWelcome;
-(NSUInteger)hash;
-(id)URLWithReferrer:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 text:(id)arg2 metadata:(id)arg3 tocAssets:(id)arg4 collectionAssets:(id)arg5 tipIdentifiers:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithContentDictionary:(id)arg0 metadata:(id)arg1 clientConditionIdentifier:(id)arg2 fileIdMap:(id)arg3 clientConditions:(id)arg4 ;


@end


#endif