// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSUBSTITUTION_H
#define TTSSUBSTITUTION_H

@class NSSet, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TTSSubstitution : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) BOOL appliesToAllApps; // ivar: _appliesToAllApps
@property (copy, nonatomic) NSSet *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (nonatomic) BOOL ignoreCase; // ivar: _ignoreCase
@property (readonly, nonatomic) BOOL isReplacementTextAllPunctuation; // ivar: _isReplacementTextAllPunctuation
@property (readonly, nonatomic) BOOL isReplacementTextSurroundedByPunctuation; // ivar: _isReplacementTextSurroundedByPunctuation
@property (nonatomic) BOOL isUserSubstitution; // ivar: _isUserSubstitution
@property (copy, nonatomic) NSSet *languages; // ivar: _languages
@property (copy, nonatomic) NSString *originalString; // ivar: _originalString
@property (copy, nonatomic) NSString *phonemes; // ivar: _phonemes
@property (nonatomic) _NSRange replacementRange; // ivar: _replacementRange
@property (copy, nonatomic) NSString *replacementString; // ivar: _replacementString
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (copy, nonatomic) NSSet *voiceIds; // ivar: _voiceIds


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif