// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONTIPSELECTIONHANDLER_H
#define UIDICTATIONTIPSELECTIONHANDLER_H

@class NSString;
@protocol UIDictationTipHandlerDelegate;

#import <Foundation/Foundation.h>


@interface UIDictationTipSelectionHandler : NSObject

@property (weak, nonatomic) NSObject<UIDictationTipHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *selectionText; // ivar: _selectionText


-(id)initWithDelegate:(id)arg0 ;
-(void)finalizeSelectionTip;
-(void)signalSelectedText:(id)arg0 ;


@end


#endif