// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONTIPPRESENTATIONHANDLER_H
#define UIDICTATIONTIPPRESENTATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface UIDictationTipPresentationHandler : NSObject

@property (nonatomic) NSInteger dictationTipSignaled; // ivar: _dictationTipSignaled
@property (nonatomic) BOOL isShowingTip; // ivar: _isShowingTip
@property (nonatomic) BOOL tipPresentedInCurrentDictationSession; // ivar: _tipPresentedInCurrentDictationSession


-(BOOL)dictationCommandTipsEnabled;
-(BOOL)dictationDeletionTipShown;
-(BOOL)dictationEmojiTipShown;
-(BOOL)dictationInsertionTipShown;
-(BOOL)dictationModelessInputTipShown;
-(BOOL)dictationReplacementTipShown;
-(BOOL)dictationSelectionTipShown;
-(BOOL)dictationStopTipShown;
-(BOOL)dictationTipShownOverLimit:(NSInteger)arg0 ;
-(BOOL)shouldSignalDictationTip:(NSInteger)arg0 ;
-(BOOL)tipShownLastDay;
-(NSInteger)dictationTipDisplayCount:(NSInteger)arg0 ;
-(NSInteger)getDictationTipSignaled;
-(id)init;
-(void)resetDictationTipSignal;
-(void)resetHandler;
-(void)signalTipPresentedInCurrentDictationSession;


@end


#endif