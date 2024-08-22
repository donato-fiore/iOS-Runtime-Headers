// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCONTENT_H
#define TPSCONTENT_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding, NAIdentifiable;


#import "TPSSerializableObject.h"
#import "TPSAssets.h"

@interface TPSContent : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable>



@property (copy, nonatomic) TPSAssets *assets; // ivar: _assets
@property (nonatomic) BOOL bodyContainsLink; // ivar: _bodyContainsLink
@property (copy, nonatomic) NSArray *bodyContent; // ivar: _bodyContent
@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger labelStyle; // ivar: _labelStyle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *titleContent; // ivar: _titleContent


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif