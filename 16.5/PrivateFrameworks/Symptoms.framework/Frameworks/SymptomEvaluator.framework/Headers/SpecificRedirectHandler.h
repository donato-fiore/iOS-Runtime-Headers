// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPECIFICREDIRECTHANDLER_H
#define SPECIFICREDIRECTHANDLER_H

@class NSData, NSString;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface SpecificRedirectHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

 {
    NSData *_triggerURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)noteSymptom:(id)arg0 ;
-(id)evaluate:(id)arg0 forThreshold:(NSInteger)arg1 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;


@end


#endif