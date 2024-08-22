// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSIMAGEALLOCATOR_H
#define TCMPSIMAGEALLOCATOR_H

@class NSString;
@protocol MPSImageAllocator;

#import <Foundation/Foundation.h>


@interface TCMPSImageAllocator : NSObject <MPSImageAllocator>

 {
    NSUInteger _format;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)imageForCommandBuffer:(id)arg0 imageDescriptor:(id)arg1 kernel:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif