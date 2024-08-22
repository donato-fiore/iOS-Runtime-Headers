// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSASSETSINFO_H
#define TPSASSETSINFO_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface TPSAssetsInfo : NSObject {
    ? videoIdentifier;
    ? videoURL;
    ? imageIdentifier;
    ? imageURL;
}


@property (nonatomic, copy) NSString *imageIdentifier;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *videoIdentifier;
@property (nonatomic, copy) NSURL *videoURL;


-(id)init;
-(id)initWithVideoIdentifier:(id)arg0 videoURL:(id)arg1 imageIdentifier:(id)arg2 imageURL:(id)arg3 ;


@end


#endif