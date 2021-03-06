//
//  FSViewController.h
//  FlipSnapLibrary
//
//  Created by Rob Newport on 7/25/17.
//  Copyright © 2017 Whisteo. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface FSCamViewController : UIViewController

// User Interface Objects
//@property(nonatomic, strong) IBOutlet UISlider *toleranceSlider;
@property(nonatomic, strong) IBOutlet UIView *swatch;

// User Interface Actions
//-(IBAction)sliderTolerance:(id)sender;
-(IBAction)resetColors:(id)sender;


// Status and Descriptions
@property(assign) BOOL recording;
@property(nonatomic, readonly, getter=framerate) float framerate;

// Algorithm Management
-(void)loadAlgorithm:(NSString *)algorithmString;
-(NSString *)algorithmDescription;
-(NSString *)algorithmName;
-(NSString *)algorithmExpiration;
-(void)setBlendmode:(float)mode;
-(void)setSaturation:(float)amount;

// Video Management
-(void)extractVideoURL:(NSURL *)url withCompletion:(void(^)(void))doneImporting;
-(void)extractVideoURL:(NSURL *)url forSize:(CGSize)size withCompletion:(void(^)(void))doneImporting;
-(void)extractPictureURL:(NSURL *)url;
-(void)clearTempDirectory;
-(void)recordingStoppedForMovieAtURL:(NSURL *)url;
-(void)invertBackground:(bool)invert;
-(void)startRecording;
-(void)stopRecording;
-(void)frontCameraWithCompletion:(void(^)(void))doneSwitching;
-(void)backCameraWithCompletion:(void(^)(void))doneSwitching;

-(void)frontDepthCameraWithCompletion:(void(^)(void))doneSwitching;
-(void)backDepthCameraWithCompletion:(void(^)(void))doneSwitching;

-(void)rotateBackgroundWithCompletion:(void(^)(void))doneRotating;
-(void)startPictureWithCompletion:(void(^)(UIImage *))imageTaken;
-(void)depthOn:(BOOL)isOn;
-(void)depthFiltered:(BOOL)isFiltered;
-(void)toleranceSettingForHue:(float)hue saturation:(float)saturation vibrance:(float)vibrance;

@property(nonatomic, retain) NSString *videoSessionPreset;
@property(assign) int maximumFramesImported;

@end
