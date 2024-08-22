// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKRECOGNIZEDTEXT_H
#define VKRECOGNIZEDTEXT_H

@class NSMutableDictionary, VNRecognizedTextObservation, NSString;


#import "VKRecognizedItem.h"

@interface VKRecognizedText : VKRecognizedItem {
    NSMutableDictionary *_transcripts;
}


@property (readonly, nonatomic) VNRecognizedTextObservation *observation;
@property (readonly, nonatomic) NSString *transcript;


-(BOOL)shouldAssociateWithItem:(id)arg0 ;
-(id)description;
-(id)initWithFrameInfo:(id)arg0 textBlockObservation:(id)arg1 ;
-(void)associateWithItem:(id)arg0 ;


@end


#endif