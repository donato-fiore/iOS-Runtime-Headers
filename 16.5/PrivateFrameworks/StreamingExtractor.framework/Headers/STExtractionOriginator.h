// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STEXTRACTIONORIGINATOR_H
#define STEXTRACTIONORIGINATOR_H

@protocol STExtractionOriginatorProtocol;

#import <Foundation/Foundation.h>


@interface STExtractionOriginator : NSObject <STExtractionOriginatorProtocol>



@property (weak) NSObject<STExtractionOriginatorProtocol> *originator; // ivar: _originator


-(void)remote_extractionCompleteAtArchivePath:(id)arg0 ;
-(void)remote_extractionEnteredPassthroughMode;
-(void)remote_setExtractionProgress:(CGFloat)arg0 ;


@end


#endif