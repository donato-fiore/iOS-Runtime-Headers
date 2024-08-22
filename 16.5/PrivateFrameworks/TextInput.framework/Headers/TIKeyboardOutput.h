// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDOUTPUT_H
#define TIKEYBOARDOUTPUT_H

@class NSMutableDictionary, NSIndexSet, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardCandidate.h"

@interface TIKeyboardOutput : NSObject <NSSecureCoding>



@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // ivar: _acceptedCandidate
@property (retain, nonatomic) NSMutableDictionary *customInfo; // ivar: _customInfo
@property (nonatomic) NSUInteger deletionCount; // ivar: _deletionCount
@property (nonatomic) NSUInteger forwardDeletionCount; // ivar: _forwardDeletionCount
@property (copy, nonatomic) NSIndexSet *handwritingStrokesToDelete; // ivar: _handwritingStrokesToDelete
@property (copy, nonatomic) NSString *insertionText; // ivar: _insertionText
@property (copy, nonatomic) NSString *insertionTextAfterSelection; // ivar: _insertionTextAfterSelection
@property (nonatomic) NSInteger positionOffset; // ivar: _positionOffset
@property (nonatomic) BOOL producedByDeleteInput; // ivar: _producedByDeleteInput
@property (retain, nonatomic) TIKeyboardCandidate *shortcutConversion; // ivar: _shortcutConversion
@property (nonatomic) BOOL shouldSendCurrentLocation; // ivar: _shouldSendCurrentLocation
@property (copy, nonatomic) NSString *textToCommit; // ivar: _textToCommit
@property (nonatomic) BOOL unmarkIfNecessary; // ivar: _unmarkIfNecessary


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)deleteBackward;
-(void)deleteBackward:(NSUInteger)arg0 ;
-(void)deleteForward;
-(void)deleteForward:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)insertTextAfterSelection:(id)arg0 ;


@end


#endif