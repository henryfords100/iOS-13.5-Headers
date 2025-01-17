/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstFaceInfo : NSObject {

	int swFaceId;
	int swLastFrameSeen;
	int hwFaceId;
	int hwLastFrameSeen;
	CGPoint swCenter;
	CGSize swSize;
	CGPoint hwCenter;
	CGSize hwSize;

}

@property (assign) int swFaceId; 
@property (assign) CGPoint swCenter; 
@property (assign) CGSize swSize; 
@property (assign) int swLastFrameSeen; 
@property (assign) int hwFaceId; 
@property (assign) CGPoint hwCenter; 
@property (assign) CGSize hwSize; 
@property (assign) int hwLastFrameSeen; 
-(id)init;
-(void)setSwFaceId:(int)arg1 ;
-(void)setSwCenter:(CGPoint)arg1 ;
-(void)setSwSize:(CGSize)arg1 ;
-(void)setSwLastFrameSeen:(int)arg1 ;
-(void)setHwFaceId:(int)arg1 ;
-(void)setHwCenter:(CGPoint)arg1 ;
-(void)setHwSize:(CGSize)arg1 ;
-(void)setHwLastFrameSeen:(int)arg1 ;
-(CGPoint)hwCenter;
-(CGSize)hwSize;
-(CGPoint)swCenter;
-(CGSize)swSize;
-(int)hwFaceId;
-(CGRect)hwFaceRect;
-(int)swFaceId;
-(CGRect)swFaceRect;
-(float)overlapWithHwRect:(CGRect)arg1 ;
-(float)overlapWithSwRect:(CGRect)arg1 ;
-(int)swLastFrameSeen;
-(int)hwLastFrameSeen;
@end

