/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLImageData : NSObject {

	CGImageSourceRef _imageSource;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)type;
-(CGSize)size;
-(long long)orientation;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(id)durations;
@end
