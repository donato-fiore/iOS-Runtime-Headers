// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USKRESOURCE_H
#define USKRESOURCE_H


#import <Foundation/Foundation.h>


@interface USKResource : NSObject {
    shared_ptr<pxrInternal_v0_21__aapl__pxrReserved__::ArAsset> _asset;
    shared_ptr<const char> _buffer;
    NSInteger _length;
}




+(id)resourceWithPath:(id)arg0 ;
+(id)resourceWithResourcePath:(id)arg0 ;
+(id)resourceWithURL:(id)arg0 ;
+(id)resourceWithUSKScene:(id)arg0 path:(id)arg1 ;
-(id)dataNoCopy;
-(void)dealloc;


@end


#endif