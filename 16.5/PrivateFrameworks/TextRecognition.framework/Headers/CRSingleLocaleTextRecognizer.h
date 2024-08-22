// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSINGLELOCALETEXTRECOGNIZER_H
#define CRSINGLELOCALETEXTRECOGNIZER_H



#import "CRMultiModelTextRecognizer.h"
#import "CRNeuralTextRecognizer.h"

@interface CRSingleLocaleTextRecognizer : CRMultiModelTextRecognizer

@property (retain) CRNeuralTextRecognizer *neuralRecognizer; // ivar: _neuralRecognizer


-(id)decodingStats;
-(id)identifierForTextFeature:(id)arg0 ;
-(id)inferenceStats;
-(id)initWithImageReaderOptions:(id)arg0 error:(*id)arg1 ;
-(id)recognizerForIdentifier:(id)arg0 ;
-(void)cancel;


@end


#endif