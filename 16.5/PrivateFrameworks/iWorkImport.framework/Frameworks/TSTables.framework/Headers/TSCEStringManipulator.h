// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCESTRINGMANIPULATOR_H
#define TSCESTRINGMANIPULATOR_H

@class NSString, NSCharacterSet;

#import <Foundation/Foundation.h>


@interface TSCEStringManipulator : NSObject {
    NSString *_straightQuote;
    NSString *_straightQuoteEscaped;
    NSString *_fullwidthApostrophe;
    NSString *_fullwidthApostropheEscaped;
    NSString *_rightSingleQuotationMark;
    NSString *_rightSingleQuotationMarkEscaped;
    NSString *_leftSingleQuotationMark;
    NSString *_leftSingleQuotationMarkEscaped;
    NSString *_temporaryStraightQuoteString;
    NSString *_temporaryFullwidthApostropheString;
    NSString *_temporaryLeftSingleQuoteString;
    NSString *_temporaryRightSingleQuoteString;
    NSCharacterSet *_singleQuoteCharacterSet;
    NSCharacterSet *_periodCharacterSet;
    NSCharacterSet *_colonCharacterSet;
    NSCharacterSet *_asciiSpaceCharacterSet;
    NSCharacterSet *_intlWhitespaceCharacterSet;
    NSCharacterSet *_singleQuoteOrWhitespaceCharacterSet;
    NSCharacterSet *_singleCurlyQuoteCharacterSet;
    NSCharacterSet *_doubleCurlyQuoteCharacterSet;
    NSCharacterSet *_requiringSingleQuotesCharacterSet;
}




-(id)init;


@end


#endif