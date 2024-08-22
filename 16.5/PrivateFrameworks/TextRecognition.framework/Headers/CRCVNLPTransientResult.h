// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCVNLPTRANSIENTRESULT_H
#define CRCVNLPTRANSIENTRESULT_H

@class CVNLPActivationMatrix, NSString, CVNLPTextDecodingResult;
@protocol CRTextRecognizerDecodingTransientResult, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CRCVNLPTransientResult : NSObject <CRTextRecognizerDecodingTransientResult>



@property (retain) CVNLPActivationMatrix *activationMatrix; // ivar: _activationMatrix
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *decodingLocale; // ivar: _decodingLocale
@property (readonly, copy) NSString *description;
@property (retain) CVNLPTextDecodingResult *greedyDecodingResult; // ivar: _greedyDecodingResult
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_semaphore> *languageRecognitionActiveSem; // ivar: _languageRecognitionActiveSem
@property (readonly) Class superclass;


-(id)initWithActivationMatrix:(id)arg0 decodingLocale:(id)arg1 ;


@end


#endif