// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCOLLECTIONSECTION_H
#define TPSCOLLECTIONSECTION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"

@interface TPSCollectionSection : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *collections; // ivar: _collections
@property (readonly, nonatomic, getter=isFeatured) BOOL featured;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 collections:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 text:(id)arg1 collections:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeCollection:(id)arg0 ;


@end


#endif