// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIGAINFOCUSEVENT_H
#define TIGAINFOCUSEVENT_H

@class NSLocale, NSString, NSArray;


#import "TIContextChangeEvent.h"

@interface TIGainFocusEvent : TIContextChangeEvent {
    NSLocale *_locale;
    NSString *_originalDocumentText;
    NSArray *_originalWords;
    NSArray *_originalWordEntries;
}


@property (readonly, nonatomic) NSArray *originalWordEntries;


-(id)initWithTIKeyboardState:(id)arg0 andLocale:(id)arg1 ;
-(id)originalDocumentText;
-(id)originalWords;


@end


#endif