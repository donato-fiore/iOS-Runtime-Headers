// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSSYSTEMNOTESTAKESCREENSHOTACTION_H
#define SBSSYSTEMNOTESTAKESCREENSHOTACTION_H

@class BSAction, BSXPCCodingArray;



@interface SBSSystemNotesTakeScreenshotAction : BSAction

@property (readonly, nonatomic) BSXPCCodingArray *displaysToScreenshot;


-(id)initWithDisplaysToScreenshot:(id)arg0 responder:(id)arg1 ;


@end


#endif