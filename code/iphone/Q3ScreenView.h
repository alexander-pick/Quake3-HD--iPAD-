/*
 *
 * Quake3Arena iPad Port by Alexander Pick
 * based on iPhone Quake 3 by Seth Kingsley
 *
 */

#import	<UIKit/UIView.h>
#import <UIKit/UIKit.h>

#import	<OpenGLES/EAGL.h>
#import	<OpenGLES/EAGLDrawable.h>
#import	<OpenGLES/ES1/gl.h>

#define BIT0 (1<<0)
#define BIT1 (1<<1)
#define BIT2 (1<<2)
#define BIT3 (1<<3)
#define BIT4 (1<<4)
#define BIT5 (1<<5)
#define BIT6 (1<<6)

#define TODO 0

enum Q3EventType         
{
	Q3Event_ClickOnMenu = BIT0,
	Q3Event_Fire = BIT1,
	Q3Event_RotateCamera = BIT2,
	Q3Event_MovePlayerForward = BIT3,
	Q3Event_MovePlayerBack = BIT4,
	Q3Event_MovePlayerLeft = BIT5,
	Q3Event_MovePlayerRight = BIT6,
	COUNT
};

@interface Q3ScreenView : UIView
{
@protected
		
	EAGLContext *_context;
	GLuint _frameBuffer;
	GLuint _renderBuffer;
	GLuint _depthBuffer;
	CGSize _size;
	CGPoint _GUIMouseLocation;
	CGSize _GUIMouseOffset;
	CGPoint _mouseScale;
	NSUInteger _numTouches;
#ifdef TODO
	unsigned int _bitMask;
#endif // TODO
		
	IBOutlet UIImageView *joypadCap;

	NSTimer *gameTimer;	
	
	BOOL joypadMoving;

	CGRect joypad;

	uint joypadCenterx, joypadCentery, joypadMaxRadius, joypadWidth, joypadHeight;

	int joypadTouchHash;

	CGPoint joypadCapLocation;
	
	CGPoint oldLocation;
	
	CGRect	shootbutton;
	
	BOOL	shooting;
	
	BOOL	isFinger;
	
	float touchAngle;
	float distance;
}

- initWithFrame:(CGRect)frame;
@property (assign, readonly, nonatomic) NSUInteger numColorBits;
@property (assign, readonly, nonatomic) NSUInteger numDepthBits;
@property (assign, readonly, nonatomic) EAGLContext *context;
- (void)swapBuffers;

@end
