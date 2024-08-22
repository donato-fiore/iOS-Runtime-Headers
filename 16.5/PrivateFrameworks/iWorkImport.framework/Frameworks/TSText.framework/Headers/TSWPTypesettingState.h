// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTYPESETTINGSTATE_H
#define TSWPTYPESETTINGSTATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSWPTypesettingState : NSObject

@property (nonatomic) CGFloat endPos; // ivar: _endPos
@property (retain, nonatomic) NSDictionary *hyphenationAttr; // ivar: _hyphenationAttr
@property (nonatomic) unsigned int hyphenationChar; // ivar: _hyphenationChar
@property (nonatomic) BOOL oikomiSquish; // ivar: _oikomiSquish
@property (nonatomic) CGFloat startPos; // ivar: _startPos


-(void)clear;


@end


#endif