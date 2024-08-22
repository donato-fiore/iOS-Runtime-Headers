// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRLANGUAGERECOGNITIONCONTEXT_H
#define CRLANGUAGERECOGNITIONCONTEXT_H

@class NSString, NSMutableString, NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CRLanguageRecognitionContext : NSObject {
    NSString *_recognizedLanguage;
}


@property (retain) NSMutableString *contextString; // ivar: _contextString
@property (retain) NSMutableArray *featuresAccumulator; // ivar: _featuresAccumulator
@property (retain) NSObject<OS_dispatch_semaphore> *languageRecognitionSem; // ivar: _languageRecognitionSem
@property (readonly) NSString *recognizedLanguage;
@property NSUInteger script; // ivar: _script


-(id)initWithScript:(NSUInteger)arg0 ;
-(void)_updateFeatureLocale:(id)arg0 ;
-(void)processFeature:(id)arg0 recognizer:(id)arg1 ;
-(void)runRecognitionWithRecognizer:(id)arg0 force:(BOOL)arg1 ;


@end


#endif