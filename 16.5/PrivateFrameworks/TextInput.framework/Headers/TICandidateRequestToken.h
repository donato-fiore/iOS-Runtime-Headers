// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TICANDIDATEREQUESTTOKEN_H
#define TICANDIDATEREQUESTTOKEN_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "TIDocumentState.h"

@interface TICandidateRequestToken : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (readonly, nonatomic) int shiftState; // ivar: _shiftState


+(BOOL)supportsSecureCoding;
+(id)tokenForKeyboardState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSameRequestAs:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initForKeyboardState:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif