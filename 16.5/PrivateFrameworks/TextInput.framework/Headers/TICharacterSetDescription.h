// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TICHARACTERSETDESCRIPTION_H
#define TICHARACTERSETDESCRIPTION_H

@class NSCharacterSet, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TICharacterSetDescription : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSCharacterSet *_characterSet;
}


@property (readonly, nonatomic) NSInteger baseIdentifier; // ivar: _baseIdentifier
@property (readonly, nonatomic) NSCharacterSet *characterSet;
@property (copy, nonatomic) NSString *charactersAddedToBase; // ivar: _charactersAddedToBase
@property (copy, nonatomic) NSString *charactersRemovedFromBase; // ivar: _charactersRemovedFromBase
@property (readonly, nonatomic) BOOL inverted; // ivar: _inverted


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBase:(NSInteger)arg0 additionalCharacters:(id)arg1 removedCharacters:(id)arg2 inverted:(BOOL)arg3 ;
-(id)initWithBaseCharacterSet:(NSInteger)arg0 ;
-(id)initWithCharactersInString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newCharacterSetFromDescription;
-(void)clearCachedCharacterSet;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif