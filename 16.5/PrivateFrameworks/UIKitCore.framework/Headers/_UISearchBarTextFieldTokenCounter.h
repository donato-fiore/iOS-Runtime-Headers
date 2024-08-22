// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHBARTEXTFIELDTOKENCOUNTER_H
#define _UISEARCHBARTEXTFIELDTOKENCOUNTER_H

@class NSTextStorage, NSMutableIndexSet, NSIndexSet;

#import <Foundation/Foundation.h>


@interface _UISearchBarTextFieldTokenCounter : NSObject {
    id *_textStorageObservation;
    NSTextStorage *_textStorage;
    NSMutableIndexSet *_tokenCharacterIndexes;
}


@property (readonly, nonatomic) _NSRange characterRangeOfAllTokens;
@property (readonly, nonatomic) NSIndexSet *tokenCharacterIndexes;


-(NSUInteger)characterIndexForInsertingTokenAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)characterIndexForSelectingOrRemovingTokenAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfTokenAtCharacterIndex:(NSUInteger)arg0 ;
-(id)initWithTextStorage:(id)arg0 ;
-(id)tokenAtCharacterIndex:(NSUInteger)arg0 ;
-(struct _NSRange )characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange )arg0 ;
-(struct _NSRange )characterRangeOfTextAfterLastToken;
-(struct _NSRange )subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange )arg0 ;
-(void)_addCharacterIndexesOfTokensInRange:(struct _NSRange )arg0 toIndexSet:(id)arg1 ;
-(void)_handleProcessEditing;


@end


#endif