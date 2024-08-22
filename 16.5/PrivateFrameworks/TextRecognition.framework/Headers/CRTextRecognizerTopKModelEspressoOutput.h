// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRTEXTRECOGNIZERTOPKMODELESPRESSOOUTPUT_H
#define CRTEXTRECOGNIZERTOPKMODELESPRESSOOUTPUT_H

@class NSString, NSArray;
@protocol CRTextRecognizerModelOutput;

#import <Foundation/Foundation.h>


@interface CRTextRecognizerTopKModelEspressoOutput : NSObject <CRTextRecognizerModelOutput>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? output_label_prob_map; // ivar: _output_label_prob_map
@property (nonatomic) ? output_topk_indices; // ivar: _output_topk_indices
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo; // ivar: _textFeatureInfo


-(id)initWithOutputLabelProbs:(struct ? )arg0 outputTopKIndices:(struct ? )arg1 featureInfo:(id)arg2 ;
-(void)dealloc;


@end


#endif