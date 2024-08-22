// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRMSKEYBOARDINFO_H
#define TVRMSKEYBOARDINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVRMSKeyboardInfo : NSObject

@property (nonatomic) NSInteger keyboardInputType; // ivar: _keyboardInputType
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (nonatomic) NSInteger maximumCharacters; // ivar: _maximumCharacters
@property (nonatomic) NSInteger minimumCharacters; // ivar: _minimumCharacters
@property (nonatomic) BOOL secureText; // ivar: _secureText
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithItemsArray:(id)arg0 ;


@end


#endif