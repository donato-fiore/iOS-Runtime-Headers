// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBUNDOSTEP_H
#define WEBUNDOSTEP_H


#import <Foundation/Foundation.h>


@interface WebUndoStep : NSObject {
    RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> m_step;
}




+(id)stepWithUndoStep:(*void)arg0 ;
+(void)initialize;
-(*void)step;
-(id)initWithUndoStep:(*void)arg0 ;
-(void)dealloc;


@end


#endif