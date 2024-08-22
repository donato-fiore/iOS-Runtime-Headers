// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCTRANSLATEDPARAGRAPH_H
#define VKCTRANSLATEDPARAGRAPH_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VKQuad.h"

@interface VKCTranslatedParagraph : NSObject

@property (readonly, nonatomic) BOOL isPassthrough; // ivar: _isPassthrough
@property (readonly, nonatomic) VKQuad *quad; // ivar: _quad
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)initWithText:(id)arg0 quad:(id)arg1 isPassthrough:(BOOL)arg2 ;


@end


#endif