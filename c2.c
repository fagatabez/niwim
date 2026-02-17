.class public Lc2/c;
.super Ljava/lang/Object;
.source "SourceFile"


# instance fields
.field private final A:Lb2/i;

.field public A0:Lb2/i;

.field public B:Lb2/d;

.field public final B0:[Ljava/lang/String;

.field public C:Lb2/i;

.field public C0:Ljava/lang/String;

.field private D:J

.field public D0:Ljava/lang/String;

.field public E:Lb2/i;

.field public E0:Ljava/lang/String;

.field public F:Lb2/i;

.field public F0:Z

.field private G:Lb2/i;

.field private G0:I

.field public H:Lb2/i;

.field public I:Lb2/i;

.field public J:J

.field public K:Z

.field public L:J

.field public M:Ljava/lang/String;

.field public N:Ljava/lang/String;

.field public O:Ljava/lang/String;

.field public P:I

.field public Q:I

.field private R:J

.field private S:Lb2/i;

.field private T:I

.field private U:I

.field private V:I

.field public W:Lb2/i;

.field public X:Lb2/i;

.field public Y:Lb2/i;

.field private final Z:Lb2/i;

.field public a:Lc2/k;

.field private a0:J

.field public b:Lc2/g;

.field public b0:Lb2/i;

.field public c:Lc2/a;

.field public c0:J

.field public final d:Lc2/f;

.field private d0:Z

.field public e:Lb2/h;

.field public e0:Lb2/i;

.field public f:J

.field public f0:Lb2/i;

.field public g:J

.field public g0:Lb2/i;

.field public h:Ljava/util/Random;

.field public h0:Lb2/i;

.field public i:J

.field public i0:Lb2/i;

.field public j:Lb2/d;

.field public j0:Lb2/i;

.field public k:Lb2/d;

.field public k0:Lb2/i;

.field public l:Lb2/i;

.field public l0:Lb2/i;

.field public m:Lb2/d;

.field public m0:Lb2/i;

.field public n:Lb2/i;

.field public n0:Lb2/i;

.field public o:Lb2/i;

.field private o0:Lb2/d;

.field public p:Ljava/lang/String;

.field private p0:J

.field private final q:Lb2/d;

.field private final q0:Lb2/i;

.field private final r:Lb2/d;

.field private final r0:Lb2/d;

.field private final s:Lb2/d;

.field public s0:Z

.field private final t:Lb2/d;

.field public t0:Z

.field private final u:Lb2/d;

.field public u0:Ljava/lang/String;

.field private final v:Lb2/d;

.field public v0:Lb2/i;

.field private final w:Lb2/d;

.field public w0:Lb2/i;

.field private final x:Lb2/d;

.field public x0:Lb2/i;

.field y:Lb2/i;

.field public y0:Lb2/i;

.field private z:Z

.field public z0:Lb2/d;


# direct methods
.method public constructor <init>()V
    .locals 9

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lc2/f;

    invoke-direct {v0}, Lc2/f;-><init>()V

    iput-object v0, p0, Lc2/c;->d:Lc2/f;

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lc2/c;->f:J

    iput-wide v0, p0, Lc2/c;->g:J

    new-instance v2, Lb2/i;

    invoke-direct {v2}, Lb2/i;-><init>()V

    iput-object v2, p0, Lc2/c;->l:Lb2/i;

    new-instance v2, Lb2/d;

    invoke-direct {v2}, Lb2/d;-><init>()V

    iput-object v2, p0, Lc2/c;->m:Lb2/d;

    new-instance v2, Lb2/i;

    invoke-direct {v2}, Lb2/i;-><init>()V

    iput-object v2, p0, Lc2/c;->n:Lb2/i;

    new-instance v2, Lb2/i;

    invoke-direct {v2}, Lb2/i;-><init>()V

    iput-object v2, p0, Lc2/c;->o:Lb2/i;

    const-string v2, "0"

    iput-object v2, p0, Lc2/c;->p:Ljava/lang/String;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->q:Lb2/d;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->r:Lb2/d;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->s:Lb2/d;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->t:Lb2/d;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->u:Lb2/d;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->v:Lb2/d;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->w:Lb2/d;

    new-instance v3, Lb2/d;

    invoke-direct {v3}, Lb2/d;-><init>()V

    iput-object v3, p0, Lc2/c;->x:Lb2/d;

    new-instance v3, Lb2/i;

    invoke-direct {v3, v0, v1}, Lb2/i;-><init>(J)V

    iput-object v3, p0, Lc2/c;->y:Lb2/i;

    const/4 v3, 0x0

    iput-boolean v3, p0, Lc2/c;->z:Z

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->A:Lb2/i;

    new-instance v4, Lb2/d;

    invoke-direct {v4}, Lb2/d;-><init>()V

    iput-object v4, p0, Lc2/c;->B:Lb2/d;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->C:Lb2/i;

    iput-wide v0, p0, Lc2/c;->D:J

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->E:Lb2/i;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->F:Lb2/i;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->G:Lb2/i;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->H:Lb2/i;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->I:Lb2/i;

    iput-wide v0, p0, Lc2/c;->J:J

    iput-boolean v3, p0, Lc2/c;->K:Z

    iput-wide v0, p0, Lc2/c;->L:J

    const-string v4, "There is nothing"

    iput-object v4, p0, Lc2/c;->M:Ljava/lang/String;

    const-string v4, "new at the moment :/"

    iput-object v4, p0, Lc2/c;->N:Ljava/lang/String;

    const-string v4, ""

    iput-object v4, p0, Lc2/c;->O:Ljava/lang/String;

    iput v3, p0, Lc2/c;->P:I

    iput v3, p0, Lc2/c;->Q:I

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->S:Lb2/i;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->W:Lb2/i;

    new-instance v4, Lb2/i;

    const-wide/16 v5, 0x1

    invoke-direct {v4, v5, v6}, Lb2/i;-><init>(J)V

    iput-object v4, p0, Lc2/c;->X:Lb2/i;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->Y:Lb2/i;

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->Z:Lb2/i;

    const-wide/16 v7, 0x104

    iput-wide v7, p0, Lc2/c;->a0:J

    new-instance v4, Lb2/i;

    invoke-direct {v4}, Lb2/i;-><init>()V

    iput-object v4, p0, Lc2/c;->b0:Lb2/i;

    iput-wide v0, p0, Lc2/c;->c0:J

    iput-boolean v3, p0, Lc2/c;->d0:Z

    new-instance v0, Lb2/i;

    invoke-direct {v0, v5, v6}, Lb2/i;-><init>(J)V

    iput-object v0, p0, Lc2/c;->e0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/c;->f0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0, v5, v6}, Lb2/i;-><init>(J)V

    iput-object v0, p0, Lc2/c;->g0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/c;->h0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0, v5, v6}, Lb2/i;-><init>(J)V

    iput-object v0, p0, Lc2/c;->i0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/c;->j0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0, v5, v6}, Lb2/i;-><init>(J)V

    iput-object v0, p0, Lc2/c;->k0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/c;->l0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0, v5, v6}, Lb2/i;-><init>(J)V

    iput-object v0, p0, Lc2/c;->m0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/c;->n0:Lb2/i;

    new-instance v0, Lb2/i;

    invoke-direct {v0}, Lb2/i;-><init>()V

    iput-object v0, p0, Lc2/c;->q0:Lb2/i;

    new-instance v0, Lb2/d;

    invoke-direct {v0}, Lb2/d;-><init>()V

    iput-object v0, p0, Lc2/c;->r0:Lb2/d;

    iput-boolean v3, p0, Lc2/c;->s0:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lc2/c;->t0:Z

    iput-object v2, p0, Lc2/c;->u0:Ljava/lang/String;

    new-instance v1, Lb2/i;

    invoke-direct {v1}, Lb2/i;-><init>()V

    iput-object v1, p0, Lc2/c;->v0:Lb2/i;

    new-instance v1, Lb2/i;

    invoke-direct {v1}, Lb2/i;-><init>()V

    iput-object v1, p0, Lc2/c;->w0:Lb2/i;

    new-instance v1, Lb2/i;

    invoke-direct {v1}, Lb2/i;-><init>()V

    iput-object v1, p0, Lc2/c;->x0:Lb2/i;

    new-instance v1, Lb2/i;

    invoke-direct {v1}, Lb2/i;-><init>()V

    iput-object v1, p0, Lc2/c;->y0:Lb2/i;

    new-instance v1, Lb2/d;

    invoke-direct {v1}, Lb2/d;-><init>()V

    iput-object v1, p0, Lc2/c;->z0:Lb2/d;

    new-instance v1, Lb2/i;

    invoke-direct {v1}, Lb2/i;-><init>()V

    iput-object v1, p0, Lc2/c;->A0:Lb2/i;

    const-string v1, "225"

    const-string v2, "500"

    const-string v4, "40"

    filled-new-array {v4, v1, v2}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lc2/c;->B0:[Ljava/lang/String;

    const-string v1, "0.99$"

    iput-object v1, p0, Lc2/c;->C0:Ljava/lang/String;

    const-string v1, "4.99$"

    iput-object v1, p0, Lc2/c;->D0:Ljava/lang/String;

    const-string v1, "9.99$"

    iput-object v1, p0, Lc2/c;->E0:Ljava/lang/String;

    iput-boolean v3, p0, Lc2/c;->F0:Z

    iput v0, p0, Lc2/c;->G0:I

    new-instance v0, Lc2/k;

    invoke-direct {v0}, Lc2/k;-><init>()V

    iput-object v0, p0, Lc2/c;->a:Lc2/k;

    new-instance v0, Lc2/g;

    invoke-direct {v0}, Lc2/g;-><init>()V

    iput-object v0, p0, Lc2/c;->b:Lc2/g;

    new-instance v0, Lc2/a;

    invoke-direct {v0}, Lc2/a;-><init>()V

    iput-object v0, p0, Lc2/c;->c:Lc2/a;

    new-instance v0, Lb2/d;

    invoke-direct {v0}, Lb2/d;-><init>()V

    iput-object v0, p0, Lc2/c;->j:Lb2/d;

    new-instance v0, Lb2/d;

    invoke-direct {v0}, Lb2/d;-><init>()V

    iput-object v0, p0, Lc2/c;->k:Lb2/d;

    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    iput-object v0, p0, Lc2/c;->h:Ljava/util/Random;

    new-instance v0, Lb2/h;

    invoke-direct {v0}, Lb2/h;-><init>()V

    iput-object v0, p0, Lc2/c;->e:Lb2/h;

    return-void
.end method

.method private F(J)Lb2/d;
    .locals 5

    new-instance v0, Lb2/d;

    const-wide/16 v1, 0x5

    mul-long p1, p1, v1

    iget-object v1, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v1}, Lc2/k;->u()J

    move-result-wide v1

    const-wide/16 v3, 0x2

    mul-long v1, v1, v3

    const-wide/16 v3, 0x64

    add-long/2addr v1, v3

    mul-long p1, p1, v1

    div-long/2addr p1, v3

    invoke-direct {v0, p1, p2}, Lb2/d;-><init>(J)V

    sget-object p1, LW1/b;->s:Lc2/c;

    invoke-virtual {p1, v0}, Lc2/c;->e(Lb2/d;)V

    return-object v0
.end method

.method private G()J
    .locals 5

    iget-object v0, p0, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    cmp-long v4, v0, v2

    if-gez v4, :cond_0

    const-wide/16 v0, 0x0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    sub-long/2addr v0, v2

    :goto_0
    return-wide v0
.end method

.method private H()J
    .locals 2

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v0}, Lh2/b;->I()J

    move-result-wide v0

    return-wide v0
.end method

.method private H0()V
    .locals 3

    iget v0, p0, Lc2/c;->P:I

    const/4 v1, 0x0

    const/4 v2, 0x2

    invoke-static {v0, v1, v2}, Lr0/b;->b(III)I

    move-result v0

    invoke-static {v0}, Lb2/d;->z(I)V

    iget-object v0, p0, Lc2/c;->j:Lb2/d;

    invoke-direct {p0, v1}, Lc2/c;->O(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    iget-object v0, p0, Lc2/c;->m:Lb2/d;

    const/4 v1, 0x1

    invoke-direct {p0, v1}, Lc2/c;->O(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    invoke-direct {p0, v2}, Lc2/c;->O(I)I

    move-result v0

    iput v0, p0, Lc2/c;->T:I

    const/4 v0, 0x3

    invoke-direct {p0, v0}, Lc2/c;->O(I)I

    move-result v0

    iput v0, p0, Lc2/c;->U:I

    iget-object v0, p0, Lc2/c;->k:Lb2/d;

    const/4 v1, 0x4

    invoke-direct {p0, v1}, Lc2/c;->O(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    const/4 v0, 0x5

    invoke-direct {p0, v0}, Lc2/c;->O(I)I

    move-result v0

    iput v0, p0, Lc2/c;->V:I

    iget-object v0, p0, Lc2/c;->z0:Lb2/d;

    const/4 v1, 0x6

    invoke-direct {p0, v1}, Lc2/c;->O(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    iget-object v0, p0, Lc2/c;->B:Lb2/d;

    const/4 v1, 0x7

    invoke-direct {p0, v1}, Lc2/c;->O(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    return-void
.end method

.method private I()J
    .locals 2

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v0}, Lh2/a;->C()I

    move-result v0

    int-to-long v0, v0

    return-wide v0
.end method

.method private J()J
    .locals 2

    invoke-static {}, Lk2/h;->g()J

    move-result-wide v0

    return-wide v0
.end method

.method private K()J
    .locals 2

    invoke-static {}, Lm2/a;->h()I

    move-result v0

    int-to-long v0, v0

    return-wide v0
.end method

.method private O(I)I
    .locals 4

    iget v0, p0, Lc2/c;->P:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    iget-wide v0, p0, Lc2/c;->R:J

    mul-int/lit8 p1, p1, 0x8

    shr-long/2addr v0, p1

    const-wide/16 v2, 0xff

    and-long/2addr v0, v2

    long-to-int p1, v0

    return p1

    :cond_0
    return v0
.end method

.method private V()J
    .locals 4

    iget-object v0, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->y()J

    move-result-wide v0

    const-wide/16 v2, 0x1770

    mul-long v0, v0, v2

    const-wide/32 v2, 0x57e40

    sub-long/2addr v2, v0

    return-wide v2
.end method

.method private X()J
    .locals 5

    iget-object v0, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->m()J

    move-result-wide v0

    const-wide/16 v2, 0x64

    mul-long v0, v0, v2

    const-wide/16 v2, 0x1770

    sub-long/2addr v2, v0

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->j:LX1/c;

    const/16 v1, 0x258

    invoke-virtual {v0, v1}, LX1/c;->m(I)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->j:LX1/c;

    invoke-virtual {v0}, LX1/c;->l()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    invoke-static {}, Lm2/a;->q()F

    move-result v0

    const/high16 v1, 0x40a00000    # 5.0f

    const/high16 v4, 0x40e00000    # 7.0f

    invoke-static {v0, v1, v4}, Lr0/b;->a(FFF)F

    move-result v0

    long-to-float v1, v2

    div-float/2addr v1, v0

    float-to-long v0, v1

    return-wide v0

    :cond_0
    const-wide/16 v0, 0xa

    div-long/2addr v2, v0

    :cond_1
    return-wide v2
.end method

.method private a()V
    .locals 1

    iget-object v0, p0, Lc2/c;->b0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    return-void
.end method

.method private w0(II)V
    .locals 4

    iget-wide v0, p0, Lc2/c;->R:J

    mul-int/lit8 p1, p1, 0x8

    const-wide/16 v2, 0xff

    shl-long/2addr v2, p1

    not-long v2, v2

    and-long/2addr v0, v2

    and-int/lit16 p2, p2, 0xff

    int-to-long v2, p2

    shl-long p1, v2, p1

    or-long/2addr p1, v0

    iput-wide p1, p0, Lc2/c;->R:J

    return-void
.end method


# virtual methods
.method public A()Lb2/d;
    .locals 3

    new-instance v0, Lb2/d;

    const-wide/16 v1, 0x2

    invoke-direct {v0, v1, v2}, Lb2/d;-><init>(J)V

    iget-object v1, p0, Lc2/c;->A:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lb2/d;->t(J)V

    iget-object v1, p0, Lc2/c;->B:Lb2/d;

    invoke-virtual {v1}, Lb2/d;->g()I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    return-object v0
.end method

.method public A0()V
    .locals 5

    iget-object v0, p0, Lc2/c;->C:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->C:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    iget-object v0, p0, Lc2/c;->C:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    :cond_0
    return-void
.end method

.method public B()I
    .locals 1

    iget v0, p0, Lc2/c;->U:I

    return v0
.end method

.method public B0()V
    .locals 3

    iget-object v0, p0, Lc2/c;->b0:Lb2/i;

    sget-object v1, LW1/b;->t:Lf2/i;

    iget-object v1, v1, Lf2/i;->j:Lf2/u;

    iget-object v1, v1, Lf2/u;->C:Lq2/p;

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Lq2/p;->j(I)Z

    move-result v1

    if-eqz v1, :cond_0

    const-wide/16 v1, 0x7d

    goto :goto_0

    :cond_0
    const-wide/16 v1, 0xfa

    :goto_0
    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->f:Lo2/c;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lo2/c;->c:Z

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lc2/c;->c0:J

    return-void
.end method

.method public C()I
    .locals 1

    iget v0, p0, Lc2/c;->T:I

    return v0
.end method

.method public C0(I)V
    .locals 4

    int-to-long v0, p1

    iget-object p1, p0, Lc2/c;->H:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v2

    cmp-long p1, v0, v2

    if-lez p1, :cond_0

    iget-object p1, p0, Lc2/c;->H:Lb2/i;

    invoke-virtual {p1, v0, v1}, Lb2/i;->c(J)V

    invoke-static {}, Ld2/b;->h()V

    :cond_0
    iget-object p1, p0, Lc2/c;->I:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v2

    cmp-long p1, v0, v2

    if-lez p1, :cond_1

    iget-object p1, p0, Lc2/c;->I:Lb2/i;

    invoke-virtual {p1, v0, v1}, Lb2/i;->c(J)V

    :cond_1
    return-void
.end method

.method public D()I
    .locals 1

    iget v0, p0, Lc2/c;->V:I

    return v0
.end method

.method public D0()V
    .locals 7

    iget-object v0, p0, Lc2/c;->B:Lb2/d;

    invoke-virtual {p0}, Lc2/c;->A()Lb2/d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lb2/d;->b(Lb2/d;)V

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->f:Lo2/c;

    invoke-virtual {v0}, Lo2/c;->i()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    const/4 v0, 0x6

    invoke-static {v0, v1}, Lb2/l;->g(II)V

    const/4 v0, 0x7

    invoke-static {v0}, Lk2/k;->k(I)V

    :cond_0
    invoke-static {}, Ld2/b;->y()V

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->I()J

    move-result-wide v2

    sget-object v0, LW1/b;->s:Lc2/c;

    iget-object v0, v0, Lc2/c;->h:Ljava/util/Random;

    const/16 v4, 0x64

    invoke-virtual {v0, v4}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    int-to-long v5, v0

    cmp-long v0, v2, v5

    if-lez v0, :cond_3

    iget-object v0, p0, Lc2/c;->A:Lb2/i;

    const-wide/16 v2, 0x1

    invoke-virtual {v0, v2, v3}, Lb2/i;->a(J)V

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v0}, Lh2/b;->R()I

    move-result v0

    sget-object v5, LW1/b;->t:Lf2/i;

    iget-object v5, v5, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v5}, Lh2/a;->Q()I

    move-result v5

    add-int/2addr v0, v5

    const/4 v5, 0x0

    :cond_1
    if-lt v0, v4, :cond_2

    add-int/lit8 v0, v0, -0x64

    iget-object v6, p0, Lc2/c;->A:Lb2/i;

    invoke-virtual {v6, v2, v3}, Lb2/i;->a(J)V

    add-int/2addr v5, v1

    const/16 v6, 0x1e

    if-le v5, v6, :cond_1

    :cond_2
    sget-object v1, LW1/b;->s:Lc2/c;

    iget-object v1, v1, Lc2/c;->h:Ljava/util/Random;

    invoke-virtual {v1, v4}, Ljava/util/Random;->nextInt(I)I

    move-result v1

    if-le v0, v1, :cond_3

    iget-object v0, p0, Lc2/c;->A:Lb2/i;

    invoke-virtual {v0, v2, v3}, Lb2/i;->a(J)V

    :cond_3
    return-void
.end method

.method public E()F
    .locals 3

    iget-object v0, p0, Lc2/c;->W:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    long-to-float v0, v0

    iget-object v1, p0, Lc2/c;->X:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    invoke-virtual {p0, v1, v2}, Lc2/c;->R(J)J

    move-result-wide v1

    long-to-float v1, v1

    div-float/2addr v0, v1

    return v0
.end method

.method public E0()V
    .locals 1

    iget v0, p0, Lc2/c;->G0:I

    if-ltz v0, :cond_0

    const/4 v0, -0x1

    iput v0, p0, Lc2/c;->G0:I

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    iput v0, p0, Lc2/c;->G0:I

    :goto_0
    return-void
.end method

.method public F0()V
    .locals 5

    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0xfa

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x4

    goto :goto_0

    :cond_0
    const/4 v0, 0x3

    :goto_0
    iget v1, p0, Lc2/c;->P:I

    add-int/lit8 v1, v1, 0x1

    rem-int/2addr v1, v0

    iput v1, p0, Lc2/c;->P:I

    invoke-direct {p0}, Lc2/c;->H0()V

    return-void
.end method

.method public G0(I)V
    .locals 1

    invoke-virtual {p0, p1}, Lc2/c;->N(I)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    rem-int/lit8 v0, v0, 0x3

    invoke-direct {p0, p1, v0}, Lc2/c;->w0(II)V

    invoke-direct {p0}, Lc2/c;->H0()V

    return-void
.end method

.method public I0(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lc2/c;->C0:Ljava/lang/String;

    iput-object p2, p0, Lc2/c;->D0:Ljava/lang/String;

    iput-object p3, p0, Lc2/c;->E0:Ljava/lang/String;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lc2/c;->F0:Z

    return-void
.end method

.method public L()F
    .locals 4

    iget-object v0, p0, Lc2/c;->E:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/32 v2, 0x186a0

    div-long/2addr v0, v2

    const-wide v2, 0x3ff028f5c28f5c29L    # 1.01

    long-to-double v0, v0

    invoke-static {v2, v3, v0, v1}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v0

    double-to-float v0, v0

    return v0
.end method

.method public M()F
    .locals 5

    iget-object v0, p0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-gez v4, :cond_0

    iget-object v0, p0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    :cond_0
    iget-object v0, p0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    long-to-float v0, v0

    invoke-direct {p0}, Lc2/c;->V()J

    move-result-wide v1

    long-to-float v1, v1

    div-float/2addr v0, v1

    return v0
.end method

.method public N(I)I
    .locals 4

    iget-wide v0, p0, Lc2/c;->R:J

    mul-int/lit8 p1, p1, 0x8

    shr-long/2addr v0, p1

    const-wide/16 v2, 0xff

    and-long/2addr v0, v2

    long-to-int p1, v0

    return p1
.end method

.method public P()F
    .locals 4

    iget-object v0, p0, Lc2/c;->E:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    sub-long/2addr v0, v2

    const-wide/32 v2, 0x186a0

    div-long/2addr v0, v2

    const-wide v2, 0x3ff028f5c28f5c29L    # 1.01

    long-to-double v0, v0

    invoke-static {v2, v3, v0, v1}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v0

    double-to-float v0, v0

    return v0
.end method

.method public Q()I
    .locals 5

    invoke-virtual {p0}, Lc2/c;->c0()D

    move-result-wide v0

    const-wide v2, 0x3f50624dd2f1a9fcL    # 0.001

    cmpl-double v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x3

    return v0

    :cond_0
    invoke-static {v0, v1}, Ljava/lang/Math;->log10(D)D

    move-result-wide v0

    neg-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-int v0, v0

    return v0
.end method

.method public R(J)J
    .locals 8

    const-wide/16 v0, 0x1

    sub-long/2addr p1, v0

    iget-object v2, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v2}, Lc2/k;->n()J

    move-result-wide v2

    const-wide/16 v4, 0x4

    div-long/2addr v2, v4

    const-wide/16 v6, 0x1e

    sub-long/2addr v6, v2

    mul-long p1, p1, v6

    const-wide/16 v2, 0x28

    add-long/2addr p1, v2

    iget-object v2, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v2}, Lc2/k;->n()J

    move-result-wide v2

    mul-long v2, v2, v4

    const-wide/16 v4, 0x64

    sub-long v2, v4, v2

    mul-long p1, p1, v2

    div-long/2addr p1, v4

    iget-object v2, p0, Lc2/c;->k0:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    sub-long/2addr v2, v0

    long-to-float v2, v2

    const/high16 v3, 0x42c80000    # 100.0f

    div-float/2addr v2, v3

    long-to-float p1, p1

    const/high16 p2, 0x3f800000    # 1.0f

    add-float/2addr v2, p2

    div-float/2addr p1, v2

    float-to-long v4, p1

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->x0:Lh2/b;

    invoke-virtual {p1}, Lh2/b;->H()I

    move-result p1

    int-to-float p1, p1

    div-float/2addr p1, v3

    long-to-float v2, v4

    add-float/2addr p1, p2

    div-float/2addr v2, p1

    float-to-long p1, v2

    const-wide/16 v2, 0x0

    cmp-long v4, p1, v2

    if-gtz v4, :cond_0

    goto :goto_0

    :cond_0
    move-wide v0, p1

    :goto_0
    return-wide v0
.end method

.method public S()Ljava/lang/String;
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lj2/a;->d()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v5, v1, v3

    if-nez v5, :cond_0

    const-string v1, "1;"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    const-string v1, "1a;"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_0
    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, LW1/b;->v:Lc2/d;

    iget-object v2, v2, Lc2/d;->b:Lc2/j;

    invoke-virtual {v2}, Lc2/j;->l()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lc2/c;->j:Lb2/d;

    invoke-virtual {v2}, Lb2/d;->v()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ";"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "#"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lk2/k;->n()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lk2/h;->o()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v3}, Lb2/d;->i()J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->d:Lc2/f;

    invoke-virtual {v3}, Lc2/f;->e()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->X:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->W:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->f0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->k:Lb2/d;

    invoke-virtual {v3}, Lb2/d;->v()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->n:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->v0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->w0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->h0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->y0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->z0:Lb2/d;

    invoke-virtual {v3}, Lb2/d;->v()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->A0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->i0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->j0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->A:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lc2/c;->R:J

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->S:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->E:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->G:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v3}, Lb2/d;->f()J

    move-result-wide v3

    neg-long v3, v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->H:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->c:Lc2/a;

    invoke-virtual {v3}, Lc2/a;->m()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->x0:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    neg-long v3, v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lc2/c;->G0:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->I:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->n0:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    neg-long v3, v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->l0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v3, p0, Lc2/c;->J:J

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->k0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lc2/c;->Q:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lc2/c;->P:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, LW1/b;->u:LW1/c;

    invoke-interface {v3}, LW1/c;->p()J

    move-result-wide v3

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->q0:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->B:Lb2/d;

    invoke-virtual {v3}, Lb2/d;->v()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lc2/c;->o:Lb2/i;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, LW1/b;->w:Lr2/c;

    invoke-virtual {v2, v0}, Lr2/c;->z(Ljava/lang/StringBuilder;)V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v2}, Lc2/k;->K()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v2}, Lc2/g;->F()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lj2/a;->t()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ld2/d;->j()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ll2/a;->s()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public T()Lb2/d;
    .locals 6

    iget-object v0, p0, Lc2/c;->o0:Lb2/d;

    if-eqz v0, :cond_0

    iget-wide v0, p0, Lc2/c;->p0:J

    iget-object v2, p0, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    iget-object v4, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v4}, Lc2/k;->i()J

    move-result-wide v4

    sub-long/2addr v2, v4

    invoke-virtual {p0}, Lc2/c;->a0()J

    move-result-wide v4

    sub-long/2addr v2, v4

    cmp-long v4, v0, v2

    if-eqz v4, :cond_2

    :cond_0
    iget-object v0, p0, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    iget-object v2, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v2}, Lc2/k;->i()J

    move-result-wide v2

    sub-long/2addr v0, v2

    invoke-virtual {p0}, Lc2/c;->a0()J

    move-result-wide v2

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lc2/c;->p0:J

    const-wide/16 v2, 0x1

    cmp-long v4, v0, v2

    if-gez v4, :cond_1

    iput-wide v2, p0, Lc2/c;->p0:J

    :cond_1
    new-instance v0, Lb2/d;

    const-wide/16 v4, 0x4

    invoke-direct {v0, v4, v5}, Lb2/d;-><init>(J)V

    iput-object v0, p0, Lc2/c;->o0:Lb2/d;

    iget-wide v4, p0, Lc2/c;->p0:J

    sub-long/2addr v4, v2

    invoke-virtual {v0, v4, v5}, Lb2/d;->t(J)V

    :cond_2
    iget-object v0, p0, Lc2/c;->o0:Lb2/d;

    iget-object v1, p0, Lc2/c;->j:Lb2/d;

    invoke-virtual {v1}, Lb2/d;->g()I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    iget-object v0, p0, Lc2/c;->o0:Lb2/d;

    return-object v0
.end method

.method public U()J
    .locals 6

    iget-object v0, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    iget-object v0, p0, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x64

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    iget-object v0, p0, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0xfa

    mul-long v0, v0, v2

    sget-object v4, LW1/b;->s:Lc2/c;

    invoke-virtual {v4}, Lc2/c;->b0()J

    move-result-wide v4

    add-long/2addr v4, v2

    div-long/2addr v0, v4

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    return-wide v0

    :cond_0
    iget-object v0, p0, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    return-wide v0
.end method

.method public W()J
    .locals 4

    invoke-direct {p0}, Lc2/c;->V()J

    move-result-wide v0

    iget-object v2, p0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    sub-long/2addr v0, v2

    return-wide v0
.end method

.method public Y()F
    .locals 3

    iget-object v0, p0, Lc2/c;->y:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    long-to-float v0, v0

    invoke-direct {p0}, Lc2/c;->X()J

    move-result-wide v1

    long-to-float v1, v1

    div-float/2addr v0, v1

    return v0
.end method

.method public Z()Lb2/d;
    .locals 8

    new-instance v0, Lb2/d;

    const-wide/16 v1, 0x2

    invoke-direct {v0, v1, v2}, Lb2/d;-><init>(J)V

    iget-object v1, p0, Lc2/c;->k0:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v3, 0x1e

    cmp-long v5, v1, v3

    if-gez v5, :cond_0

    const-wide/16 v3, 0x19

    mul-long v1, v1, v3

    goto :goto_1

    :cond_0
    const-wide/16 v5, 0x3c

    cmp-long v7, v1, v5

    if-gez v7, :cond_1

    sub-long/2addr v1, v3

    const-wide/16 v3, 0x2d

    mul-long v1, v1, v3

    const-wide/16 v3, 0x2ee

    :goto_0
    add-long/2addr v1, v3

    goto :goto_1

    :cond_1
    const-wide/16 v3, 0x78

    cmp-long v7, v1, v3

    if-gez v7, :cond_2

    sub-long/2addr v1, v5

    const-wide/16 v3, 0x50

    mul-long v1, v1, v3

    const-wide/16 v3, 0x834

    goto :goto_0

    :cond_2
    const-wide/16 v5, 0xf0

    cmp-long v7, v1, v5

    if-gez v7, :cond_3

    sub-long/2addr v1, v3

    const-wide/16 v3, 0x64

    mul-long v1, v1, v3

    const-wide/16 v3, 0x1af4

    goto :goto_0

    :cond_3
    const-wide/16 v3, 0x1e0

    cmp-long v7, v1, v3

    if-gez v7, :cond_4

    sub-long/2addr v1, v5

    const-wide/16 v3, 0x118

    mul-long v1, v1, v3

    const-wide/16 v3, 0x49d4

    goto :goto_0

    :cond_4
    sub-long/2addr v1, v3

    const-wide/16 v3, 0x2bc

    mul-long v1, v1, v3

    const-wide/32 v3, 0x15054

    goto :goto_0

    :goto_1
    const-wide/16 v3, 0x4e2

    add-long/2addr v1, v3

    invoke-virtual {p0}, Lc2/c;->d0()J

    move-result-wide v3

    sub-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lb2/d;->t(J)V

    iget-object v1, p0, Lc2/c;->B:Lb2/d;

    invoke-virtual {v1}, Lb2/d;->g()I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    return-object v0
.end method

.method public a0()J
    .locals 4

    iget-object v0, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    sub-long/2addr v0, v2

    const-wide/16 v2, 0xa

    mul-long v0, v0, v2

    return-wide v0
.end method

.method public b(ILjava/lang/String;)V
    .locals 3

    sget-object v0, LW1/b;->w:Lr2/c;

    invoke-virtual {v0, p1, p2}, Lr2/c;->D(ILjava/lang/String;)V

    if-nez p1, :cond_0

    const/16 p2, 0x28

    goto :goto_0

    :cond_0
    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    const/16 p2, 0xe1

    goto :goto_0

    :cond_1
    const/4 p2, 0x2

    if-ne p1, p2, :cond_2

    const/16 p2, 0x1f4

    goto :goto_0

    :cond_2
    const/4 p2, 0x0

    :goto_0
    iget-object v0, p0, Lc2/c;->v0:Lb2/i;

    int-to-long v1, p2

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->K0:LX1/d;

    invoke-virtual {v0, p1, p2}, LX1/d;->s(II)V

    invoke-virtual {p0}, Lc2/c;->p0()V

    return-void
.end method

.method public b0()J
    .locals 7

    iget-object v0, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    sub-long v2, v0, v2

    const-wide/16 v4, 0x32

    cmp-long v6, v2, v4

    if-lez v6, :cond_0

    const-wide/16 v2, 0x33

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x3

    mul-long v0, v0, v2

    const-wide/16 v2, 0x2

    div-long/2addr v0, v2

    add-long/2addr v0, v4

    return-wide v0

    :cond_0
    return-wide v2
.end method

.method c()V
    .locals 5

    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0xf

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    invoke-virtual {p0}, Lc2/c;->y()Lb2/d;

    move-result-object v0

    iget-object v1, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v1}, Lc2/g;->j()Lb2/d;

    move-result-object v1

    invoke-virtual {v0, v1}, Lb2/d;->s(Lb2/d;)V

    iget-object v1, p0, Lc2/c;->k:Lb2/d;

    invoke-virtual {v1, v0}, Lb2/d;->b(Lb2/d;)V

    :cond_0
    return-void
.end method

.method public c0()D
    .locals 4

    iget-object v0, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    sub-long/2addr v0, v2

    long-to-double v0, v0

    const-wide v2, 0x3fef333333333333L    # 0.975

    invoke-static {v2, v3, v0, v1}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v0

    return-wide v0
.end method

.method public d(J)J
    .locals 8

    invoke-direct {p0}, Lc2/c;->G()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-nez v4, :cond_0

    return-wide p1

    :cond_0
    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v4, 0x2ee0

    cmp-long v6, v0, v4

    if-lez v6, :cond_1

    return-wide p1

    :cond_1
    invoke-direct {p0}, Lc2/c;->G()J

    move-result-wide v0

    mul-long v0, v0, p1

    const-wide/16 v4, 0x64

    div-long/2addr v0, v4

    const/16 v6, 0x64

    cmp-long v7, v0, v2

    if-lez v7, :cond_2

    invoke-direct {p0}, Lc2/c;->G()J

    move-result-wide v0

    add-long/2addr v0, v4

    mul-long p1, p1, v0

    div-long/2addr p1, v4

    invoke-direct {p0}, Lc2/c;->H()J

    move-result-wide v0

    add-long/2addr v0, v4

    mul-long p1, p1, v0

    div-long/2addr p1, v4

    invoke-direct {p0}, Lc2/c;->I()J

    move-result-wide v0

    add-long/2addr v0, v4

    mul-long p1, p1, v0

    div-long/2addr p1, v4

    invoke-direct {p0}, Lc2/c;->J()J

    move-result-wide v0

    add-long/2addr v0, v4

    mul-long p1, p1, v0

    div-long/2addr p1, v4

    invoke-direct {p0}, Lc2/c;->K()J

    move-result-wide v0

    add-long/2addr v0, v4

    mul-long p1, p1, v0

    div-long/2addr p1, v4

    invoke-static {}, Le2/b;->m()I

    move-result v0

    add-int/2addr v0, v6

    int-to-long v0, v0

    mul-long p1, p1, v0

    div-long/2addr p1, v4

    long-to-float p1, p1

    invoke-virtual {p0}, Lc2/c;->L()F

    move-result p2

    mul-float p1, p1, p2

    float-to-long p1, p1

    return-wide p1

    :cond_2
    invoke-direct {p0}, Lc2/c;->G()J

    move-result-wide v0

    mul-long v0, v0, p1

    iget-object v2, p0, Lc2/c;->h:Ljava/util/Random;

    invoke-virtual {v2, v6}, Ljava/util/Random;->nextInt(I)I

    move-result v2

    int-to-long v2, v2

    cmp-long v4, v0, v2

    if-lez v4, :cond_3

    const-wide/16 v0, 0x1

    add-long/2addr p1, v0

    :cond_3
    return-wide p1
.end method

.method public d0()J
    .locals 7

    iget-object v0, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    sub-long v2, v0, v2

    const-wide/16 v4, 0x32

    cmp-long v6, v2, v4

    if-gez v6, :cond_0

    const-wide/16 v0, 0x230

    mul-long v2, v2, v0

    return-wide v2

    :cond_0
    const-wide/16 v4, 0x64

    cmp-long v6, v2, v4

    if-gez v6, :cond_1

    const-wide/16 v2, 0x33

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x460

    mul-long v0, v0, v2

    const-wide/16 v2, 0x6d60

    :goto_0
    add-long/2addr v0, v2

    return-wide v0

    :cond_1
    const-wide/16 v2, 0x65

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x1068

    mul-long v0, v0, v2

    const-wide/32 v2, 0x14820

    goto :goto_0
.end method

.method public e(Lb2/d;)V
    .locals 7

    invoke-direct {p0}, Lc2/c;->G()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-nez v4, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1}, Lb2/d;->h()J

    move-result-wide v0

    invoke-direct {p0}, Lc2/c;->G()J

    move-result-wide v4

    mul-long v0, v0, v4

    const-wide/16 v4, 0x64

    div-long/2addr v0, v4

    cmp-long v6, v0, v2

    if-lez v6, :cond_1

    invoke-direct {p0}, Lc2/c;->G()J

    move-result-wide v0

    add-long/2addr v0, v4

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    invoke-direct {p0}, Lc2/c;->H()J

    move-result-wide v0

    add-long/2addr v0, v4

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    invoke-direct {p0}, Lc2/c;->I()J

    move-result-wide v0

    add-long/2addr v0, v4

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    invoke-direct {p0}, Lc2/c;->J()J

    move-result-wide v0

    add-long/2addr v0, v4

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    invoke-direct {p0}, Lc2/c;->K()J

    move-result-wide v0

    add-long/2addr v0, v4

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    invoke-static {}, Le2/b;->m()I

    move-result v0

    add-int/lit8 v0, v0, 0x64

    int-to-long v0, v0

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    const-wide/16 v0, 0x3e8

    invoke-virtual {p1, v0, v1}, Lb2/d;->d(J)V

    invoke-virtual {p1, v0, v1}, Lb2/d;->d(J)V

    invoke-virtual {p1, v4, v5}, Lb2/d;->d(J)V

    invoke-virtual {p1, v4, v5}, Lb2/d;->d(J)V

    invoke-virtual {p1, v4, v5}, Lb2/d;->d(J)V

    invoke-virtual {p0}, Lc2/c;->L()F

    move-result v2

    const/high16 v3, 0x447a0000    # 1000.0f

    mul-float v2, v2, v3

    const/high16 v3, 0x42c80000    # 100.0f

    mul-float v2, v2, v3

    float-to-long v2, v2

    invoke-virtual {p1, v2, v3}, Lb2/d;->r(J)V

    invoke-virtual {p1, v0, v1}, Lb2/d;->d(J)V

    invoke-virtual {p1, v4, v5}, Lb2/d;->d(J)V

    :cond_1
    return-void
.end method

.method public e0()Lb2/d;
    .locals 9

    iget-object v0, p0, Lc2/c;->i0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    mul-long v0, v0, v2

    long-to-double v0, v0

    iget-object v2, p0, Lc2/c;->i0:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    const-wide/16 v4, 0x19

    div-long/2addr v2, v4

    const-wide v4, 0x3ff6666666666666L    # 1.4

    long-to-double v2, v2

    invoke-static {v4, v5, v2, v3}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v2

    invoke-virtual {p0}, Lc2/c;->c0()D

    move-result-wide v4

    const-wide v6, 0x3ddb7cdfd9d7bdbbL    # 1.0E-10

    cmpg-double v8, v4, v6

    if-gez v8, :cond_0

    move-wide v4, v6

    :cond_0
    mul-double v2, v2, v4

    mul-double v0, v0, v2

    const-wide/16 v2, 0x0

    :goto_0
    const-wide v4, 0x41cdcd6500000000L    # 1.0E9

    cmpl-double v6, v0, v4

    if-lez v6, :cond_1

    const-wide v4, 0x408f400000000000L    # 1000.0

    div-double/2addr v0, v4

    const-wide/16 v4, 0x3

    add-long/2addr v2, v4

    goto :goto_0

    :cond_1
    new-instance v4, Lb2/d;

    double-to-long v0, v0

    invoke-direct {v4, v0, v1, v2, v3}, Lb2/d;-><init>(JJ)V

    iget-object v0, p0, Lc2/c;->z0:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->g()I

    move-result v0

    invoke-virtual {v4, v0}, Lb2/d;->A(I)V

    return-object v4
.end method

.method public f(J)V
    .locals 2

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->j:LX1/c;

    const/16 v1, 0x190

    invoke-virtual {v0, v1}, LX1/c;->m(I)Z

    move-result v0

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x2

    mul-long p1, p1, v0

    :cond_0
    iget-object v0, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v0, p1, p2}, Lb2/d;->a(J)V

    invoke-static {}, Ld2/b;->g()V

    return-void
.end method

.method public f0()Lb2/d;
    .locals 5

    new-instance v0, Lb2/d;

    sget-object v1, LW1/b;->s:Lc2/c;

    iget-object v1, v1, Lc2/c;->A0:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v3, 0x2

    mul-long v1, v1, v3

    const-wide/16 v3, 0x1

    add-long/2addr v1, v3

    invoke-direct {v0, v1, v2}, Lb2/d;-><init>(J)V

    sget-object v1, LW1/b;->t:Lf2/i;

    iget-object v1, v1, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v1}, Lh2/b;->Q()J

    move-result-wide v1

    const-wide/16 v3, 0x64

    add-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    invoke-static {}, Lk2/h;->l()J

    move-result-wide v1

    add-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    sget-object v1, LW1/b;->t:Lf2/i;

    iget-object v1, v1, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v1}, Lh2/a;->S()I

    move-result v1

    add-int/lit8 v1, v1, 0x64

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    sget-object v1, LW1/b;->t:Lf2/i;

    iget-object v1, v1, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v1}, Lh2/a;->T()I

    move-result v1

    add-int/lit8 v1, v1, 0x64

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    invoke-static {}, Le2/b;->x()I

    move-result v1

    add-int/lit8 v1, v1, 0x64

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    invoke-virtual {v0, v3, v4}, Lb2/d;->d(J)V

    invoke-virtual {v0, v3, v4}, Lb2/d;->d(J)V

    invoke-virtual {v0, v3, v4}, Lb2/d;->d(J)V

    invoke-virtual {v0, v3, v4}, Lb2/d;->d(J)V

    invoke-virtual {v0, v3, v4}, Lb2/d;->d(J)V

    return-object v0
.end method

.method public g(Lb2/d;)V
    .locals 2

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->j:LX1/c;

    const/16 v1, 0x190

    invoke-virtual {v0, v1}, LX1/c;->m(I)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v0, p1}, Lb2/d;->b(Lb2/d;)V

    :cond_0
    iget-object v0, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v0, p1}, Lb2/d;->b(Lb2/d;)V

    invoke-static {}, Ld2/b;->g()V

    return-void
.end method

.method public g0(Ljava/lang/String;)V
    .locals 2

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\n"

    const-string v1, ""

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\t"

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\r"

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, " "

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    sget-object v0, LW1/b;->w:Lr2/c;

    iget-object v0, v0, Lr2/c;->d:Lr2/d;

    iget-object v0, v0, Lr2/d;->h:Lr2/a;

    invoke-virtual {v0, p1}, Lr2/a;->j(Ljava/lang/String;)V

    return-void
.end method

.method public h(Lb2/d;)V
    .locals 1

    iget-object v0, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v0, p1}, Lb2/d;->b(Lb2/d;)V

    invoke-static {}, Ld2/b;->g()V

    return-void
.end method

.method public h0(Ljava/lang/String;)V
    .locals 3

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\n"

    const-string v1, ""

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\t"

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\r"

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string v0, " "

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x1e

    if-ge v0, v1, :cond_0

    sget-object v0, LW1/b;->w:Lr2/c;

    iget-object v0, v0, Lr2/c;->d:Lr2/d;

    iget-object v0, v0, Lr2/d;->h:Lr2/a;

    invoke-virtual {v0, p1}, Lr2/a;->j(Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lc2/c;->y:Lb2/i;

    const-wide/16 v1, 0x0

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->b:Lc2/j;

    invoke-virtual {v0}, Lc2/j;->k()V

    sget-object v0, LW1/b;->w:Lr2/c;

    iget-object v0, v0, Lr2/c;->c:Lz2/a;

    invoke-virtual {v0}, Lz2/a;->b()V

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->j:Lf2/u;

    iget-object v0, v0, Lf2/u;->C:Lq2/p;

    invoke-virtual {v0}, Lq2/p;->l()V

    const/4 v0, 0x1

    invoke-virtual {p0, p1, v0}, Lc2/c;->l0(Ljava/lang/String;Z)V

    invoke-direct {p0}, Lc2/c;->a()V

    sget-object p1, LW1/b;->v:Lc2/d;

    iget-object p1, p1, Lc2/d;->j:LX1/c;

    invoke-virtual {p1}, LX1/c;->n()V

    sget-object p1, LW1/b;->v:Lc2/d;

    iget-object p1, p1, Lc2/d;->f:Lo2/c;

    invoke-virtual {p1}, Lo2/c;->h()V

    sget-object p1, LW1/b;->v:Lc2/d;

    iget-object p1, p1, Lc2/d;->g:Lo2/a;

    invoke-virtual {p1}, Lo2/a;->h()V

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->c:Li2/d;

    iget-object p1, p1, Li2/d;->w:Li2/f;

    invoke-virtual {p1}, Li2/f;->k()V

    return-void
.end method

.method public i(Lb2/d;)V
    .locals 1

    iget-object v0, p0, Lc2/c;->j:Lb2/d;

    invoke-virtual {v0, p1}, Lb2/d;->b(Lb2/d;)V

    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0, p1}, Lc2/g;->c(Lb2/d;)V

    return-void
.end method

.method public i0(J)Z
    .locals 17

    move-object/from16 v0, p0

    const-wide/16 v1, 0x3e8

    cmp-long v3, p1, v1

    if-lez v3, :cond_0

    goto :goto_0

    :cond_0
    move-wide/from16 v1, p1

    :goto_0
    iget-object v3, v0, Lc2/c;->E:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    const/4 v5, 0x1

    const-wide/16 v6, 0x0

    cmp-long v8, v3, v6

    if-nez v8, :cond_1

    iget-object v3, v0, Lc2/c;->G:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    cmp-long v8, v3, v6

    if-nez v8, :cond_1

    sget-object v3, LW1/b;->t:Lf2/i;

    iget-object v3, v3, Lf2/i;->u:Lf2/r;

    iput-boolean v5, v3, Lf2/r;->y:Z

    iput-boolean v5, v3, Lf2/r;->z:Z

    :cond_1
    iget-boolean v3, v0, Lc2/c;->z:Z

    if-nez v3, :cond_2

    iget-object v3, v0, Lc2/c;->E:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    cmp-long v8, v3, v6

    if-nez v8, :cond_2

    sget-object v3, LW1/b;->t:Lf2/i;

    iget-object v3, v3, Lf2/i;->u0:Lf2/z;

    invoke-virtual {v3}, Lq2/c;->j()V

    iput-boolean v5, v0, Lc2/c;->z:Z

    :cond_2
    sget-object v3, LW1/b;->t:Lf2/i;

    iget-object v3, v3, Lf2/i;->u:Lf2/r;

    iget-boolean v4, v3, Lf2/r;->y:Z

    if-nez v4, :cond_3

    sget-object v4, LW1/b;->u:LW1/c;

    if-eqz v4, :cond_3

    invoke-virtual {v3}, Lf2/r;->j()V

    sget-object v3, LW1/b;->t:Lf2/i;

    iget-object v3, v3, Lf2/i;->u:Lf2/r;

    iput-boolean v5, v3, Lf2/r;->y:Z

    :cond_3
    iget-boolean v3, v0, Lc2/c;->d0:Z

    const/4 v4, 0x0

    if-eqz v3, :cond_4

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->g:Lo2/a;

    invoke-virtual {v3}, Lo2/a;->d()V

    iput-boolean v4, v0, Lc2/c;->d0:Z

    :cond_4
    iget-object v3, v0, Lc2/c;->C:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v8

    const-wide/16 v10, -0x1

    cmp-long v3, v8, v6

    if-lez v3, :cond_5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    iget-wide v12, v0, Lc2/c;->D:J

    sub-long/2addr v8, v12

    const-wide/16 v12, 0xc8

    cmp-long v3, v8, v12

    if-lez v3, :cond_5

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->g:Lo2/a;

    invoke-virtual/range {p0 .. p0}, Lc2/c;->A()Lb2/d;

    move-result-object v8

    invoke-virtual {v3, v8}, Lo2/a;->e(Lb2/d;)V

    iget-object v3, v0, Lc2/c;->C:Lb2/i;

    invoke-virtual {v3, v10, v11}, Lb2/i;->a(J)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    iput-wide v8, v0, Lc2/c;->D:J

    :cond_5
    iget-object v3, v0, Lc2/c;->a:Lc2/k;

    iget-object v3, v3, Lc2/k;->b:[[I

    aget-object v8, v3, v4

    aget v9, v8, v4

    const/16 v12, 0x28

    if-le v9, v12, :cond_6

    aput v12, v8, v4

    :cond_6
    aget-object v3, v3, v5

    aget v8, v3, v4

    const/16 v9, 0x14

    if-le v8, v9, :cond_7

    aput v9, v3, v4

    :cond_7
    iget-object v3, v0, Lc2/c;->b0:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v8

    const-wide/16 v13, 0x1

    cmp-long v3, v8, v6

    if-lez v3, :cond_10

    iget-object v3, v0, Lc2/c;->Z:Lb2/i;

    invoke-virtual {v3, v1, v2}, Lb2/i;->a(J)V

    iget-object v3, v0, Lc2/c;->Z:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v8

    iget-wide v4, v0, Lc2/c;->a0:J

    const-wide/16 v15, 0x2

    cmp-long v3, v8, v4

    if-gez v3, :cond_9

    iget-wide v3, v0, Lc2/c;->c0:J

    cmp-long v5, v3, v15

    if-nez v5, :cond_8

    sget-object v3, LW1/b;->v:Lc2/d;

    const/16 v4, 0x5c

    invoke-virtual {v3, v4}, Lc2/d;->e(I)Z

    move-result v3

    if-eqz v3, :cond_8

    iget-object v3, v0, Lc2/c;->Z:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    iget-wide v8, v0, Lc2/c;->a0:J

    div-long/2addr v8, v15

    cmp-long v5, v3, v8

    if-ltz v5, :cond_8

    goto :goto_2

    :cond_8
    :goto_1
    const/4 v4, 0x0

    goto/16 :goto_6

    :cond_9
    :goto_2
    iget-object v3, v0, Lc2/c;->Z:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->b()V

    iget-object v3, v0, Lc2/c;->b0:Lb2/i;

    invoke-virtual {v3, v10, v11}, Lb2/i;->a(J)V

    iget-wide v3, v0, Lc2/c;->c0:J

    cmp-long v5, v3, v6

    if-nez v5, :cond_a

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->f:Lo2/c;

    invoke-virtual {v3}, Lo2/c;->b()V

    goto :goto_3

    :cond_a
    cmp-long v5, v3, v13

    if-nez v5, :cond_b

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->f:Lo2/c;

    invoke-virtual {v3}, Lo2/c;->a()V

    goto :goto_3

    :cond_b
    cmp-long v5, v3, v15

    if-nez v5, :cond_c

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->f:Lo2/c;

    invoke-virtual {v3}, Lo2/c;->d()V

    goto :goto_3

    :cond_c
    const-wide/16 v5, 0x3

    cmp-long v7, v3, v5

    if-nez v7, :cond_d

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->f:Lo2/c;

    invoke-virtual {v3}, Lo2/c;->c()V

    :cond_d
    :goto_3
    iget-wide v3, v0, Lc2/c;->c0:J

    cmp-long v5, v3, v15

    if-nez v5, :cond_e

    iget-object v3, v0, Lc2/c;->h:Ljava/util/Random;

    const/16 v4, 0x32

    invoke-virtual {v3, v4}, Ljava/util/Random;->nextInt(I)I

    move-result v3

    add-int/lit8 v3, v3, 0x64

    int-to-long v3, v3

    iput-wide v3, v0, Lc2/c;->a0:J

    goto :goto_1

    :cond_e
    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->f:Lo2/c;

    iget-boolean v3, v3, Lo2/c;->c:Z

    if-eqz v3, :cond_f

    iget-object v3, v0, Lc2/c;->h:Ljava/util/Random;

    const/16 v4, 0x19

    invoke-virtual {v3, v4}, Ljava/util/Random;->nextInt(I)I

    move-result v3

    add-int/2addr v3, v12

    int-to-long v3, v3

    iput-wide v3, v0, Lc2/c;->a0:J

    goto :goto_1

    :cond_f
    iget-object v3, v0, Lc2/c;->h:Ljava/util/Random;

    const/16 v4, 0xc8

    invoke-virtual {v3, v4}, Ljava/util/Random;->nextInt(I)I

    move-result v3

    add-int/2addr v3, v4

    int-to-long v3, v3

    iput-wide v3, v0, Lc2/c;->a0:J

    goto :goto_1

    :cond_10
    iget-object v3, v0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v3, v1, v2}, Lb2/i;->a(J)V

    sget-object v3, LW1/b;->t:Lf2/i;

    iget-object v3, v3, Lf2/i;->x:Lv2/l;

    invoke-virtual {v3}, Lq2/c;->h()Z

    move-result v3

    if-eqz v3, :cond_11

    iget-object v3, v0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    invoke-direct/range {p0 .. p0}, Lc2/c;->V()J

    move-result-wide v5

    cmp-long v7, v3, v5

    if-ltz v7, :cond_11

    iget-object v3, v0, Lc2/c;->Y:Lb2/i;

    invoke-direct/range {p0 .. p0}, Lc2/c;->V()J

    move-result-wide v4

    sub-long/2addr v4, v13

    invoke-virtual {v3, v4, v5}, Lb2/i;->c(J)V

    :cond_11
    iget-object v3, v0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    invoke-direct/range {p0 .. p0}, Lc2/c;->V()J

    move-result-wide v5

    cmp-long v7, v3, v5

    if-ltz v7, :cond_8

    iget-object v3, v0, Lc2/c;->Y:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->b()V

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->f:Lo2/c;

    iget-boolean v3, v3, Lo2/c;->c:Z

    if-eqz v3, :cond_13

    iget-object v3, v0, Lc2/c;->b0:Lb2/i;

    sget-object v4, LW1/b;->t:Lf2/i;

    iget-object v4, v4, Lf2/i;->j:Lf2/u;

    iget-object v4, v4, Lf2/u;->C:Lq2/p;

    const/4 v5, 0x3

    invoke-virtual {v4, v5}, Lq2/p;->j(I)Z

    move-result v4

    if-eqz v4, :cond_12

    invoke-virtual/range {p0 .. p0}, Lc2/c;->p()I

    move-result v4

    div-int/lit8 v4, v4, 0x2

    :goto_4
    int-to-long v4, v4

    goto :goto_5

    :cond_12
    invoke-virtual/range {p0 .. p0}, Lc2/c;->p()I

    move-result v4

    goto :goto_4

    :goto_5
    invoke-virtual {v3, v4, v5}, Lb2/i;->c(J)V

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->f:Lo2/c;

    const/4 v4, 0x0

    iput-boolean v4, v3, Lo2/c;->c:Z

    goto :goto_6

    :cond_13
    const/4 v4, 0x0

    invoke-static {}, Lo2/b;->a()V

    :goto_6
    iget-object v3, v0, Lc2/c;->y:Lb2/i;

    invoke-virtual {v3, v1, v2}, Lb2/i;->a(J)V

    iget-object v1, v0, Lc2/c;->y:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    invoke-direct/range {p0 .. p0}, Lc2/c;->X()J

    move-result-wide v5

    cmp-long v3, v1, v5

    if-ltz v3, :cond_14

    const/4 v5, 0x1

    goto :goto_7

    :cond_14
    const/4 v5, 0x0

    :goto_7
    return v5
.end method

.method public j(Lb2/d;I)V
    .locals 2

    iget-object v0, p0, Lc2/c;->q:Lb2/d;

    invoke-virtual {v0, p1}, Lb2/d;->x(Lb2/d;)V

    iget-object p1, p0, Lc2/c;->q:Lb2/d;

    int-to-long v0, p2

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    sget-object p1, LW1/b;->v:Lc2/d;

    iget-object p1, p1, Lc2/d;->j:LX1/c;

    const/16 p2, 0x1f4

    invoke-virtual {p1, p2}, LX1/c;->m(I)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {}, Lw2/f;->A()Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lc2/c;->q:Lb2/d;

    const-wide/16 v0, 0x64

    invoke-virtual {p1, v0, v1}, Lb2/d;->r(J)V

    :cond_0
    iget-object p1, p0, Lc2/c;->q:Lb2/d;

    invoke-virtual {p0, p1}, Lc2/c;->i(Lb2/d;)V

    return-void
.end method

.method public j0(I)V
    .locals 5

    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v0

    const-wide/16 v2, 0x64

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    iget-object v0, p0, Lc2/c;->y0:Lb2/i;

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object p1, p0, Lc2/c;->y0:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0xc80

    cmp-long p1, v0, v2

    if-lez p1, :cond_0

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->P:Lf2/a;

    invoke-virtual {p1}, Lq2/c;->h()Z

    move-result p1

    if-nez p1, :cond_0

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->P:Lf2/a;

    invoke-virtual {p1}, Lf2/a;->j()V

    :cond_0
    return-void
.end method

.method public k(IZII)V
    .locals 11

    iget-object v0, p0, Lc2/c;->E:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->F:Lb2/i;

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->c:Lc2/a;

    invoke-virtual {v0, p1}, Lc2/a;->l(I)V

    const/4 v0, 0x1

    invoke-static {v0, v0}, Lb2/l;->g(II)V

    invoke-static {p1}, Lk2/k;->j(I)V

    invoke-static {}, Ld2/b;->i()V

    invoke-static {p3, p4}, Lj2/a;->h(II)J

    move-result-wide v3

    sget-object p1, LW1/b;->v:Lc2/d;

    iget-object p1, p1, Lc2/d;->j:LX1/c;

    const/16 v5, 0x2bc

    invoke-virtual {p1, v5}, LX1/c;->m(I)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lc2/c;->W:Lb2/i;

    const-wide/16 v5, 0x3

    mul-long v3, v3, v5

    invoke-virtual {p1, v3, v4}, Lb2/i;->a(J)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lc2/c;->W:Lb2/i;

    invoke-virtual {p1, v3, v4}, Lb2/i;->a(J)V

    :goto_0
    sget-object p1, LW1/b;->v:Lc2/d;

    const/16 v3, 0x52

    invoke-virtual {p1, v3}, Lc2/d;->e(I)Z

    move-result p1

    const-wide/16 v3, 0x0

    if-eqz p1, :cond_1

    sget-object p1, LW1/b;->s:Lc2/c;

    iget-object p1, p1, Lc2/c;->E:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v5

    const-wide/32 v7, 0x186a0

    rem-long/2addr v5, v7

    cmp-long p1, v5, v3

    if-nez p1, :cond_1

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->z:Lv2/A;

    invoke-virtual {p1}, Lv2/A;->H()V

    :cond_1
    invoke-static {p3, p4}, Lj2/a;->a(II)I

    move-result p1

    const/4 v5, 0x0

    if-lez p1, :cond_2

    const/4 v6, 0x0

    :goto_1
    if-ge v6, p1, :cond_2

    iget-object v7, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v7}, Lc2/g;->b()V

    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    :cond_2
    :goto_2
    iget-object p1, p0, Lc2/c;->W:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v6

    iget-object p1, p0, Lc2/c;->X:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v8

    invoke-virtual {p0, v8, v9}, Lc2/c;->R(J)J

    move-result-wide v8

    const/16 p1, 0x3e8

    cmp-long v10, v6, v8

    if-ltz v10, :cond_4

    add-int/lit8 v6, v5, 0x1

    if-ge v5, p1, :cond_4

    iget-object p1, p0, Lc2/c;->W:Lb2/i;

    iget-object v5, p0, Lc2/c;->X:Lb2/i;

    invoke-virtual {v5}, Lb2/i;->d()J

    move-result-wide v7

    invoke-virtual {p0, v7, v8}, Lc2/c;->R(J)J

    move-result-wide v7

    neg-long v7, v7

    invoke-virtual {p1, v7, v8}, Lb2/i;->a(J)V

    iget-object p1, p0, Lc2/c;->X:Lb2/i;

    invoke-virtual {p1, v1, v2}, Lb2/i;->a(J)V

    const/16 p1, 0xb

    invoke-static {p1}, Lk2/k;->k(I)V

    iget-object p1, p0, Lc2/c;->X:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v7

    invoke-direct {p0, v7, v8}, Lc2/c;->F(J)Lb2/d;

    move-result-object p1

    invoke-virtual {p0, p1}, Lc2/c;->g(Lb2/d;)V

    sget-object v5, LW1/b;->v:Lc2/d;

    iget-object v5, v5, Lc2/d;->j:LX1/c;

    const/16 v7, 0x190

    invoke-virtual {v5, v7}, LX1/c;->m(I)Z

    move-result v5

    if-eqz v5, :cond_3

    const-wide/16 v7, 0x2

    invoke-virtual {p1, v7, v8}, Lb2/d;->r(J)V

    :cond_3
    sget-object v5, LW1/b;->v:Lc2/d;

    iget-object v5, v5, Lc2/d;->c:Lc2/e;

    iget-object v5, v5, Lc2/e;->g:Lq2/g;

    invoke-virtual {v5, p1}, Lq2/g;->c(Lb2/d;)V

    move v5, v6

    goto :goto_2

    :cond_4
    sget-object v5, LW1/b;->t:Lf2/i;

    iget-object v5, v5, Lf2/i;->j:Lf2/u;

    iget-object v5, v5, Lf2/u;->C:Lq2/p;

    const/16 v6, 0x17

    invoke-virtual {v5, v6}, Lq2/p;->j(I)Z

    move-result v5

    if-eqz v5, :cond_5

    const/4 v5, 0x5

    goto :goto_3

    :cond_5
    const/4 v5, 0x1

    :goto_3
    iget-object v6, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v6}, Lc2/k;->w()J

    move-result-wide v6

    int-to-long v8, v5

    mul-long v6, v6, v8

    iget-object v5, p0, Lc2/c;->h:Ljava/util/Random;

    invoke-virtual {v5, p1}, Ljava/util/Random;->nextInt(I)I

    move-result v5

    int-to-long v8, v5

    cmp-long v5, v6, v8

    if-lez v5, :cond_6

    sget-object v5, LW1/b;->s:Lc2/c;

    invoke-virtual {v5, v1, v2}, Lc2/c;->d(J)J

    move-result-wide v5

    invoke-virtual {p0, v5, v6}, Lc2/c;->f(J)V

    :cond_6
    iget-object v5, p0, Lc2/c;->q0:Lb2/i;

    invoke-virtual {v5}, Lb2/i;->d()J

    move-result-wide v5

    cmp-long v7, v5, v3

    if-gtz v7, :cond_7

    iget-object v5, p0, Lc2/c;->q0:Lb2/i;

    iget-object v6, p0, Lc2/c;->h:Ljava/util/Random;

    invoke-virtual {v6, p1}, Ljava/util/Random;->nextInt(I)I

    move-result p1

    add-int/2addr p1, v0

    int-to-long v6, p1

    invoke-virtual {v5, v6, v7}, Lb2/i;->c(J)V

    :cond_7
    iget-object p1, p0, Lc2/c;->q0:Lb2/i;

    const-wide/16 v5, -0x2

    invoke-virtual {p1, v5, v6}, Lb2/i;->a(J)V

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x9

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_14

    iget-object p1, p0, Lc2/c;->q0:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v5

    cmp-long p1, v5, v3

    if-gtz p1, :cond_14

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x69

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_8

    const/16 p1, 0x1900

    goto/16 :goto_4

    :cond_8
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x62

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_9

    const/16 p1, 0x500

    goto/16 :goto_4

    :cond_9
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x59

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_a

    const/16 p1, 0x100

    goto/16 :goto_4

    :cond_a
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x51

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_b

    const/16 p1, 0x80

    goto :goto_4

    :cond_b
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x4e

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_c

    const/16 p1, 0x40

    goto :goto_4

    :cond_c
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x42

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_d

    const/16 p1, 0x20

    goto :goto_4

    :cond_d
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x2e

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_e

    const/16 p1, 0x10

    goto :goto_4

    :cond_e
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x23

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_f

    const/16 p1, 0x8

    goto :goto_4

    :cond_f
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x16

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_10

    const/4 p1, 0x4

    goto :goto_4

    :cond_10
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0xe

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_11

    const/4 p1, 0x2

    goto :goto_4

    :cond_11
    const/4 p1, 0x1

    :goto_4
    sget-object v5, LW1/b;->t:Lf2/i;

    iget-object v5, v5, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v5}, Lh2/b;->O()I

    move-result v5

    const/high16 v6, 0x42c80000    # 100.0f

    const/high16 v7, 0x3f800000    # 1.0f

    if-lez v5, :cond_12

    int-to-float p1, p1

    sget-object v5, LW1/b;->t:Lf2/i;

    iget-object v5, v5, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v5}, Lh2/b;->O()I

    move-result v5

    int-to-float v5, v5

    div-float/2addr v5, v6

    add-float/2addr v5, v7

    mul-float p1, p1, v5

    float-to-int p1, p1

    :cond_12
    sget-object v5, LW1/b;->t:Lf2/i;

    iget-object v5, v5, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v5}, Lh2/a;->G()I

    move-result v5

    if-lez v5, :cond_13

    int-to-float p1, p1

    sget-object v5, LW1/b;->t:Lf2/i;

    iget-object v5, v5, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v5}, Lh2/a;->G()I

    move-result v5

    int-to-float v5, v5

    div-float/2addr v5, v6

    add-float/2addr v5, v7

    mul-float p1, p1, v5

    float-to-int p1, p1

    :cond_13
    sget-object v5, LW1/b;->v:Lc2/d;

    iget-object v5, v5, Lc2/d;->g:Lo2/a;

    const/16 v6, 0x32

    invoke-virtual {v5, v6, p1}, Lo2/a;->b(II)V

    iget-object p1, p0, Lc2/c;->q0:Lb2/i;

    const-wide/16 v5, 0x3e8

    invoke-virtual {p1, v5, v6}, Lb2/i;->c(J)V

    :cond_14
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 v5, 0x56

    invoke-virtual {p1, v5}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_15

    iget-object p1, p0, Lc2/c;->q0:Lb2/i;

    invoke-virtual {p1}, Lb2/i;->d()J

    move-result-wide v5

    const-wide/16 v7, 0x1f4

    cmp-long p1, v5, v7

    if-nez p1, :cond_15

    iget-object p1, p0, Lc2/c;->q0:Lb2/i;

    const-wide/16 v5, 0x1f3

    invoke-virtual {p1, v5, v6}, Lb2/i;->c(J)V

    sget-object p1, LW1/b;->v:Lc2/d;

    iget-object p1, p1, Lc2/d;->g:Lo2/a;

    invoke-virtual {p1}, Lo2/a;->c()V

    :cond_15
    if-nez p2, :cond_16

    invoke-virtual {p0, v0}, Lc2/c;->j0(I)V

    :cond_16
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 p2, 0x28

    invoke-virtual {p1, p2}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_1b

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    iget-object p2, p0, Lc2/c;->A0:Lb2/i;

    invoke-virtual {p2}, Lb2/i;->d()J

    move-result-wide v5

    const-wide/16 v7, 0xa

    div-long/2addr v5, v7

    add-long/2addr v5, v1

    invoke-virtual {p1, v5, v6}, Lb2/d;->w(J)V

    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->x0:Lh2/b;

    invoke-virtual {p1}, Lh2/b;->Q()J

    move-result-wide p1

    const-wide/16 v5, 0x64

    cmp-long v0, p1, v3

    if-lez v0, :cond_17

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    sget-object p2, LW1/b;->t:Lf2/i;

    iget-object p2, p2, Lf2/i;->x0:Lh2/b;

    invoke-virtual {p2}, Lh2/b;->Q()J

    move-result-wide v7

    add-long/2addr v7, v5

    invoke-virtual {p1, v7, v8}, Lb2/d;->r(J)V

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    invoke-virtual {p1, v5, v6}, Lb2/d;->d(J)V

    :cond_17
    invoke-static {}, Lk2/h;->l()J

    move-result-wide p1

    cmp-long v0, p1, v3

    if-lez v0, :cond_18

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    invoke-static {}, Lk2/h;->l()J

    move-result-wide v3

    add-long/2addr v3, v5

    invoke-virtual {p1, v3, v4}, Lb2/d;->r(J)V

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    invoke-virtual {p1, v5, v6}, Lb2/d;->d(J)V

    :cond_18
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->y0:Lh2/a;

    invoke-virtual {p1}, Lh2/a;->T()I

    move-result p1

    if-lez p1, :cond_19

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    sget-object p2, LW1/b;->t:Lf2/i;

    iget-object p2, p2, Lf2/i;->y0:Lh2/a;

    invoke-virtual {p2}, Lh2/a;->T()I

    move-result p2

    add-int/lit8 p2, p2, 0x64

    int-to-long v3, p2

    invoke-virtual {p1, v3, v4}, Lb2/d;->r(J)V

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    invoke-virtual {p1, v5, v6}, Lb2/d;->d(J)V

    :cond_19
    invoke-static {}, Le2/b;->x()I

    move-result p1

    if-lez p1, :cond_1a

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    invoke-static {}, Le2/b;->x()I

    move-result p2

    add-int/lit8 p2, p2, 0x64

    int-to-long v3, p2

    invoke-virtual {p1, v3, v4}, Lb2/d;->r(J)V

    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    invoke-virtual {p1, v5, v6}, Lb2/d;->d(J)V

    :cond_1a
    iget-object p1, p0, Lc2/c;->r0:Lb2/d;

    invoke-static {p3, p4}, Lj2/a;->n(II)J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lb2/d;->r(J)V

    iget-object p1, p0, Lc2/c;->z0:Lb2/d;

    iget-object p2, p0, Lc2/c;->r0:Lb2/d;

    invoke-virtual {p1, p2}, Lb2/d;->b(Lb2/d;)V

    :cond_1b
    sget-object p1, LW1/b;->t:Lf2/i;

    iget-object p1, p1, Lf2/i;->j:Lf2/u;

    iget-object p1, p1, Lf2/u;->C:Lq2/p;

    const/16 p2, 0x29

    invoke-virtual {p1, p2}, Lq2/p;->j(I)Z

    move-result p1

    if-eqz p1, :cond_1c

    iget-object p1, p0, Lc2/c;->A0:Lb2/i;

    invoke-virtual {p1, v1, v2}, Lb2/i;->a(J)V

    :cond_1c
    return-void
.end method

.method public k0()Z
    .locals 5

    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    iget-object v0, v0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0x1

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public l()V
    .locals 7

    iget-object v0, p0, Lc2/c;->y:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v1

    invoke-direct {p0}, Lc2/c;->X()J

    move-result-wide v3

    sub-long/2addr v1, v3

    const-wide/16 v3, 0x14

    invoke-static {v1, v2, v3, v4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/c;->G:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->x()J

    move-result-wide v3

    iget-object v0, p0, Lc2/c;->h:Ljava/util/Random;

    const/16 v5, 0x32

    invoke-virtual {v0, v5}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    int-to-long v5, v0

    cmp-long v0, v3, v5

    if-lez v0, :cond_0

    sget-object v0, LW1/b;->s:Lc2/c;

    invoke-virtual {v0, v1, v2}, Lc2/c;->d(J)J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lc2/c;->f(J)V

    :cond_0
    return-void
.end method

.method public l0(Ljava/lang/String;Z)V
    .locals 18

    move-object/from16 v1, p0

    if-nez p1, :cond_0

    if-nez p2, :cond_19

    :cond_0
    invoke-static/range {p1 .. p1}, Lb2/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "/"

    invoke-virtual {v0, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x6

    if-eqz p2, :cond_3

    array-length v0, v2

    if-lt v0, v3, :cond_2

    invoke-virtual {v1, v2}, Lc2/c;->m([Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->A:Lf2/s;

    invoke-virtual {v0}, Lq2/c;->c()V

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->k:Lf2/o;

    invoke-virtual {v0}, Lq2/c;->c()V

    goto :goto_1

    :cond_2
    :goto_0
    sget-object v0, LW1/b;->u:LW1/c;

    invoke-interface {v0}, LW1/c;->k()V

    return-void

    :cond_3
    :goto_1
    const/4 v4, 0x0

    aget-object v0, v2, v4

    const-string v5, ";"

    invoke-virtual {v0, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    aget-object v0, v0, v4

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->b:Lc2/j;

    const/4 v6, 0x1

    aget-object v7, v2, v6

    invoke-virtual {v0, v7}, Lc2/j;->f(Ljava/lang/String;)V

    const/4 v7, 0x2

    aget-object v0, v2, v7

    invoke-virtual {v0, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v8

    iget-object v0, v1, Lc2/c;->j:Lb2/d;

    aget-object v9, v8, v4

    invoke-virtual {v0, v9}, Lb2/d;->o(Ljava/lang/String;)V

    invoke-static {}, Lk2/k;->m()V

    aget-object v0, v8, v6

    const-string v9, "#"

    invoke-virtual {v0, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    aget-object v0, v8, v6

    invoke-virtual {v0, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lk2/k;->i(Ljava/lang/String;)V

    :cond_4
    invoke-static {}, Lk2/h;->n()V

    aget-object v0, v8, v7

    invoke-virtual {v0, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    aget-object v0, v8, v7

    invoke-virtual {v0, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lk2/h;->m(Ljava/lang/String;)V

    :cond_5
    iget-object v0, v1, Lc2/c;->m:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->u()V

    iget-object v0, v1, Lc2/c;->m:Lb2/d;

    const/4 v9, 0x3

    aget-object v10, v8, v9

    invoke-static {v10}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v10

    invoke-virtual {v0, v10, v11}, Lb2/d;->q(J)V

    iget-object v0, v1, Lc2/c;->d:Lc2/f;

    const/4 v10, 0x4

    aget-object v11, v8, v10

    invoke-virtual {v0, v11}, Lc2/f;->c(Ljava/lang/String;)V

    iget-object v0, v1, Lc2/c;->X:Lb2/i;

    const/4 v11, 0x5

    aget-object v12, v8, v11

    invoke-static {v12}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v12

    invoke-virtual {v0, v12, v13}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->W:Lb2/i;

    aget-object v12, v8, v3

    invoke-static {v12}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v12

    invoke-virtual {v0, v12, v13}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->Y:Lb2/i;

    const/4 v12, 0x7

    aget-object v13, v8, v12

    invoke-static {v13}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v13

    invoke-virtual {v0, v13, v14}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->e0:Lb2/i;

    const/16 v13, 0x8

    aget-object v14, v8, v13

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v14

    const-wide/16 v12, 0x1

    const-wide/16 v10, 0x0

    cmp-long v0, v14, v10

    if-nez v0, :cond_6

    iget-object v0, v1, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v0, v12, v13}, Lb2/i;->c(J)V

    :cond_6
    iget-object v0, v1, Lc2/c;->f0:Lb2/i;

    const/16 v14, 0x9

    aget-object v15, v8, v14

    invoke-static {v15}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    const/16 v14, 0xa

    aget-object v0, v8, v14

    const-string v15, "0"

    invoke-virtual {v0, v15}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    :try_start_0
    iget-object v0, v1, Lc2/c;->k:Lb2/d;

    aget-object v3, v8, v14

    invoke-virtual {v0, v3}, Lb2/d;->m(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_2

    :cond_7
    iget-object v0, v1, Lc2/c;->k:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->u()V

    :goto_2
    iget-object v0, v1, Lc2/c;->l:Lb2/i;

    const/16 v3, 0xb

    aget-object v16, v8, v3

    move-object/from16 v17, v15

    invoke-static/range {v16 .. v16}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->n:Lb2/i;

    const/16 v14, 0xc

    aget-object v15, v8, v14

    invoke-static {v15}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->v0:Lb2/i;

    const/16 v14, 0xd

    aget-object v15, v8, v14

    invoke-static {v15}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->w0:Lb2/i;

    const/16 v14, 0xe

    aget-object v15, v8, v14

    invoke-static {v15}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->g0:Lb2/i;

    const/16 v14, 0xf

    aget-object v15, v8, v14

    invoke-static {v15}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v14

    cmp-long v0, v14, v10

    if-nez v0, :cond_8

    iget-object v0, v1, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0, v12, v13}, Lb2/i;->c(J)V

    :cond_8
    iget-object v0, v1, Lc2/c;->h0:Lb2/i;

    const/16 v14, 0x10

    aget-object v14, v8, v14

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->y0:Lb2/i;

    const/16 v14, 0x11

    aget-object v14, v8, v14

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->z0:Lb2/d;

    const/16 v14, 0x12

    aget-object v15, v8, v14

    invoke-virtual {v0, v15}, Lb2/d;->p(Ljava/lang/String;)V

    iget-object v0, v1, Lc2/c;->A0:Lb2/i;

    const/16 v15, 0x13

    aget-object v15, v8, v15

    invoke-static {v15}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->i0:Lb2/i;

    const/16 v14, 0x14

    aget-object v14, v8, v14

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->i0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v14

    cmp-long v0, v14, v10

    if-nez v0, :cond_9

    iget-object v0, v1, Lc2/c;->i0:Lb2/i;

    invoke-virtual {v0, v12, v13}, Lb2/i;->c(J)V

    :cond_9
    iget-object v0, v1, Lc2/c;->j0:Lb2/i;

    const/16 v14, 0x15

    aget-object v14, v8, v14

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->A:Lb2/i;

    const/16 v14, 0x16

    aget-object v14, v8, v14

    invoke-static {v14}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    array-length v0, v8

    const/16 v14, 0x18

    if-le v0, v14, :cond_a

    const/16 v0, 0x17

    aget-object v0, v8, v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    iput-wide v14, v1, Lc2/c;->R:J

    iget-object v0, v1, Lc2/c;->S:Lb2/i;

    const/16 v14, 0x18

    aget-object v8, v8, v14

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    :cond_a
    aget-object v0, v2, v9

    invoke-virtual {v0, v5}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v5

    iget-object v0, v1, Lc2/c;->E:Lb2/i;

    aget-object v8, v5, v4

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->G:Lb2/i;

    aget-object v8, v5, v6

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v14

    invoke-virtual {v0, v14, v15}, Lb2/i;->c(J)V

    aget-object v0, v5, v7

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    cmp-long v0, v7, v10

    if-gez v0, :cond_b

    const-wide/16 v14, -0xc8

    cmp-long v0, v7, v14

    if-lez v0, :cond_b

    iget-object v0, v1, Lc2/c;->m:Lb2/d;

    neg-long v7, v7

    invoke-virtual {v0, v7, v8}, Lb2/d;->n(J)V

    :cond_b
    iget-object v0, v1, Lc2/c;->H:Lb2/i;

    aget-object v7, v5, v9

    invoke-static {v7}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->c:Lc2/a;

    const/4 v7, 0x4

    aget-object v8, v5, v7

    invoke-virtual {v0, v8}, Lc2/a;->j(Ljava/lang/String;)V

    iget-object v0, v1, Lc2/c;->x0:Lb2/i;

    const/4 v7, 0x5

    aget-object v8, v5, v7

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    neg-long v7, v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->x0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v7

    cmp-long v0, v7, v10

    if-gez v0, :cond_c

    iget-object v0, v1, Lc2/c;->x0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    :cond_c
    const/4 v7, 0x6

    aget-object v0, v5, v7

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, v1, Lc2/c;->G0:I

    iget-object v0, v1, Lc2/c;->I:Lb2/i;

    const/4 v7, 0x7

    aget-object v8, v5, v7

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->n0:Lb2/i;

    const/16 v7, 0x8

    aget-object v8, v5, v7

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->n0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v7

    const-wide/16 v14, 0xa

    cmp-long v0, v7, v14

    if-lez v0, :cond_d

    iget-object v0, v1, Lc2/c;->n0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    :cond_d
    iget-object v0, v1, Lc2/c;->m0:Lb2/i;

    const/16 v7, 0x9

    aget-object v7, v5, v7

    invoke-static {v7}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    neg-long v7, v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v7

    cmp-long v0, v7, v10

    if-gez v0, :cond_e

    iget-object v0, v1, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    :cond_e
    iget-object v0, v1, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v7

    cmp-long v0, v7, v10

    if-nez v0, :cond_f

    iget-object v0, v1, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0, v12, v13}, Lb2/i;->c(J)V

    :cond_f
    iget-object v0, v1, Lc2/c;->l0:Lb2/i;

    const/16 v7, 0xa

    aget-object v7, v5, v7

    invoke-static {v7}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->l0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v7

    const-wide/16 v14, 0xa

    cmp-long v0, v7, v14

    if-lez v0, :cond_10

    iget-object v0, v1, Lc2/c;->l0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    :cond_10
    aget-object v0, v5, v3

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    iput-wide v7, v1, Lc2/c;->J:J

    iget-object v0, v1, Lc2/c;->k0:Lb2/i;

    const/16 v3, 0xc

    aget-object v3, v5, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    iget-object v0, v1, Lc2/c;->k0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v7

    cmp-long v0, v7, v10

    if-nez v0, :cond_11

    iget-object v0, v1, Lc2/c;->k0:Lb2/i;

    invoke-virtual {v0, v12, v13}, Lb2/i;->c(J)V

    :cond_11
    const/16 v0, 0xd

    aget-object v0, v5, v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    iput-wide v7, v1, Lc2/c;->f:J

    const/16 v0, 0xe

    aget-object v0, v5, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, v1, Lc2/c;->Q:I

    const/16 v0, 0xf

    aget-object v0, v5, v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, v1, Lc2/c;->P:I

    const/16 v0, 0x10

    aget-object v0, v5, v0

    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    iput-wide v7, v1, Lc2/c;->g:J

    iget-object v0, v1, Lc2/c;->q0:Lb2/i;

    const/16 v3, 0x11

    aget-object v3, v5, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    const/16 v0, 0x12

    aget-object v3, v5, v0

    move-object/from16 v7, v17

    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_12

    :try_start_1
    iget-object v3, v1, Lc2/c;->B:Lb2/d;

    aget-object v0, v5, v0

    invoke-virtual {v3, v0}, Lb2/d;->m(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_3

    :catch_1
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_3

    :cond_12
    iget-object v0, v1, Lc2/c;->B:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->u()V

    :goto_3
    iget-object v0, v1, Lc2/c;->o:Lb2/i;

    const/16 v3, 0x13

    aget-object v3, v5, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v7

    invoke-virtual {v0, v7, v8}, Lb2/i;->c(J)V

    invoke-direct/range {p0 .. p0}, Lc2/c;->H0()V

    :try_start_2
    sget-object v0, LW1/b;->w:Lr2/c;

    invoke-virtual {v0, v5}, Lr2/c;->o([Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_4

    :catch_2
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_4
    iget-object v0, v1, Lc2/c;->a:Lc2/k;

    const/4 v3, 0x4

    aget-object v3, v2, v3

    invoke-virtual {v0, v3}, Lc2/k;->J(Ljava/lang/String;)V

    iget-object v0, v1, Lc2/c;->b:Lc2/g;

    const/4 v3, 0x5

    aget-object v3, v2, v3

    invoke-virtual {v0, v3}, Lc2/g;->y(Ljava/lang/String;)V

    iget-object v0, v1, Lc2/c;->b:Lc2/g;

    invoke-virtual {v0}, Lc2/g;->r()J

    move-result-wide v7

    const-wide/16 v12, 0x3e8

    cmp-long v0, v7, v12

    if-gez v0, :cond_13

    iget-object v0, v1, Lc2/c;->m:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->f()J

    move-result-wide v7

    const-wide/16 v12, 0x14

    cmp-long v0, v7, v12

    if-lez v0, :cond_13

    iget-object v0, v1, Lc2/c;->m:Lb2/d;

    invoke-virtual {v0}, Lb2/d;->u()V

    :cond_13
    invoke-static {}, Lj2/a;->s()V

    array-length v0, v2

    const/4 v3, 0x6

    if-le v0, v3, :cond_14

    aget-object v0, v2, v3

    invoke-static {v0}, Lj2/a;->p(Ljava/lang/String;)V

    :cond_14
    invoke-static {}, Ld2/d;->i()V

    array-length v0, v2

    const/4 v3, 0x7

    if-le v0, v3, :cond_15

    aget-object v0, v2, v3

    invoke-static {v0}, Ld2/d;->f(Ljava/lang/String;)V

    :cond_15
    invoke-static {}, Ll2/a;->r()V

    array-length v0, v2

    const/16 v3, 0x8

    if-le v0, v3, :cond_16

    aget-object v0, v2, v3

    invoke-static {v0}, Ll2/a;->q(Ljava/lang/String;)V

    :cond_16
    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v0}, Lh2/a;->V()V

    iget-object v0, v1, Lc2/c;->j:Lb2/d;

    invoke-virtual {v0, v10, v11}, Lb2/d;->j(J)Z

    move-result v0

    if-nez v0, :cond_17

    iget-object v0, v1, Lc2/c;->b:Lc2/g;

    iget-object v0, v0, Lc2/g;->j:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v2

    cmp-long v0, v2, v10

    if-gtz v0, :cond_17

    iget-object v0, v1, Lc2/c;->b:Lc2/g;

    iget-object v0, v0, Lc2/g;->a:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v2

    cmp-long v0, v2, v10

    if-lez v0, :cond_18

    :cond_17
    iput-boolean v6, v1, Lc2/c;->K:Z

    :cond_18
    iput-boolean v6, v1, Lc2/c;->s0:Z

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lc2/c;->a:Lc2/k;

    iget-object v2, v2, Lc2/k;->b:[[I

    aget-object v2, v2, v4

    aget v2, v2, v4

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lc2/c;->p:Ljava/lang/String;

    :cond_19
    return-void
.end method

.method public m([Ljava/lang/String;)Z
    .locals 11

    const-string v0, ";"

    const/4 v1, 0x1

    const/4 v2, 0x0

    :try_start_0
    aget-object v3, p1, v2

    invoke-virtual {v3, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    sget-object v3, LW1/b;->v:Lc2/d;

    iget-object v3, v3, Lc2/d;->b:Lc2/j;

    aget-object v4, p1, v1

    invoke-virtual {v3, v4}, Lc2/j;->b(Ljava/lang/String;)V

    const/4 v3, 0x2

    aget-object v4, p1, v3

    invoke-virtual {v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lc2/c;->j:Lb2/d;

    aget-object v6, v4, v2

    invoke-virtual {v5, v6}, Lb2/d;->c(Ljava/lang/String;)V

    const/4 v5, 0x3

    aget-object v6, v4, v5

    invoke-static {v6}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/4 v6, 0x5

    aget-object v7, v4, v6

    invoke-static {v7}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/4 v7, 0x6

    aget-object v8, v4, v7

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/4 v8, 0x7

    aget-object v9, v4, v8

    invoke-static {v9}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/16 v9, 0x8

    aget-object v10, v4, v9

    invoke-static {v10}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/16 v10, 0x9

    aget-object v4, v4, v10

    invoke-static {v4}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v4, p1, v5

    invoke-virtual {v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    aget-object v4, v0, v2

    invoke-static {v4}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v4, v0, v1

    invoke-static {v4}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v3, v0, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v3, v0, v5

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v3, v0, v6

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v3, v0, v7

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v3, v0, v8

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v3, v0, v9

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    aget-object v3, v0, v10

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/16 v3, 0xa

    aget-object v3, v0, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/16 v3, 0xb

    aget-object v3, v0, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/16 v3, 0xc

    aget-object v3, v0, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/16 v3, 0xd

    aget-object v3, v0, v3

    invoke-static {v3}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    const/16 v3, 0xe

    aget-object v3, v0, v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    const/16 v3, 0xf

    aget-object v3, v0, v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    sget-object v3, LW1/b;->w:Lr2/c;

    invoke-virtual {v3, v0}, Lr2/c;->b([Ljava/lang/String;)V

    iget-object v0, p0, Lc2/c;->a:Lc2/k;

    const/4 v3, 0x4

    aget-object v3, p1, v3

    invoke-virtual {v0, v3}, Lc2/k;->b(Ljava/lang/String;)V

    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    aget-object p1, p1, v6

    invoke-virtual {v0, p1}, Lc2/g;->d(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x0

    :catch_0
    return v1
.end method

.method public m0(J)V
    .locals 0

    iput-wide p1, p0, Lc2/c;->i:J

    return-void
.end method

.method public n(Lc2/i;Z)V
    .locals 5

    iget-object v0, p0, Lc2/c;->b:Lc2/g;

    iget-wide v1, v0, Lc2/g;->m:D

    invoke-virtual {v0, p1, p2}, Lc2/g;->t(Lc2/i;Z)D

    move-result-wide v3

    add-double/2addr v1, v3

    iput-wide v1, v0, Lc2/g;->m:D

    iget-object p2, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {p2}, Lc2/k;->v()J

    move-result-wide v0

    iget-object p2, p0, Lc2/c;->h:Ljava/util/Random;

    const/16 v2, 0x64

    invoke-virtual {p2, v2}, Ljava/util/Random;->nextInt(I)I

    move-result p2

    int-to-long v2, p2

    cmp-long p2, v0, v2

    if-lez p2, :cond_0

    const-wide/16 v0, 0x1

    invoke-virtual {p0, v0, v1}, Lc2/c;->d(J)J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lc2/c;->f(J)V

    :cond_0
    const/4 p2, 0x1

    invoke-virtual {p0, p2}, Lc2/c;->j0(I)V

    const/4 v0, 0x0

    invoke-static {v0, p2}, Lb2/l;->g(II)V

    const/4 p2, 0x5

    invoke-static {p2}, Lk2/k;->k(I)V

    invoke-virtual {p1}, Lc2/i;->k()V

    return-void
.end method

.method public n0()V
    .locals 1

    iget-object v0, p0, Lc2/c;->y0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    return-void
.end method

.method public o()V
    .locals 6

    :try_start_0
    sget-object v0, Li0/i;->e:Li0/h;

    const-string v1, "save.game"

    invoke-interface {v0, v1}, Li0/h;->b(Ljava/lang/String;)Lm0/a;

    move-result-object v0

    invoke-virtual {v0}, Lm0/a;->w()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    const-string v0, "<Data failed to load>"

    :goto_0
    :try_start_1
    sget-object v1, Li0/i;->e:Li0/h;

    const-string v2, "save_b.game"

    invoke-interface {v1, v2}, Li0/h;->b(Ljava/lang/String;)Lm0/a;

    move-result-object v1

    invoke-virtual {v1}, Lm0/a;->w()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    const-string v1, "<Backup-Data failed to load>"

    :goto_1
    sget-object v2, LW1/b;->u:LW1/c;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Scrap Clicker 2 - Error "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lc2/c;->u0:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "The developer will check what\'s the problem.\nDon\'t edit this email.\n\nsave:\n"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\nsave_b:\n"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v3, v0}, LW1/c;->B(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public o0()V
    .locals 3

    iget-object v0, p0, Lc2/c;->X:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    iget-object v0, p0, Lc2/c;->W:Lb2/i;

    const-wide/16 v1, 0x0

    invoke-virtual {v0, v1, v2}, Lb2/i;->c(J)V

    sget-object v0, LW1/b;->v:Lc2/d;

    iget-object v0, v0, Lc2/d;->c:Lc2/e;

    invoke-virtual {v0}, Lc2/e;->b()V

    return-void
.end method

.method public p()I
    .locals 2

    iget-object v0, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v0}, Lc2/k;->h()J

    move-result-wide v0

    long-to-int v1, v0

    add-int/lit8 v1, v1, 0x14

    return v1
.end method

.method public p0()V
    .locals 3

    iget-boolean v0, p0, Lc2/c;->t0:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lc2/c;->s0:Z

    if-eqz v0, :cond_1

    sget-object v0, LW1/b;->r:La2/c;

    iget-boolean v0, v0, La2/c;->i:Z

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lc2/c;->S()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    sget-object v1, Li0/i;->e:Li0/h;

    const-string v2, "save.game"

    invoke-interface {v1, v2}, Li0/h;->b(Ljava/lang/String;)Lm0/a;

    move-result-object v1

    invoke-static {v0}, Lb2/j;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lm0/a;->C(Ljava/lang/String;Z)V

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lc2/c;->f:J

    sget-object v0, LW1/b;->u:LW1/c;

    invoke-interface {v0}, LW1/c;->p()J

    move-result-wide v0

    iput-wide v0, p0, Lc2/c;->g:J

    :cond_1
    return-void
.end method

.method public q()J
    .locals 2

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->j:Lf2/u;

    iget-object v0, v0, Lf2/u;->C:Lq2/p;

    invoke-virtual {v0}, Lq2/p;->h()I

    move-result v0

    int-to-long v0, v0

    return-wide v0
.end method

.method public q0()V
    .locals 3

    iget-boolean v0, p0, Lc2/c;->t0:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lc2/c;->s0:Z

    if-eqz v0, :cond_0

    sget-object v0, LW1/b;->r:La2/c;

    iget-boolean v0, v0, La2/c;->i:Z

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lc2/c;->S()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    sget-object v1, Li0/i;->e:Li0/h;

    const-string v2, "save_b.game.tmp"

    invoke-interface {v1, v2}, Li0/h;->b(Ljava/lang/String;)Lm0/a;

    move-result-object v1

    invoke-static {v0}, Lb2/j;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    invoke-virtual {v1, v0, v2}, Lm0/a;->C(Ljava/lang/String;Z)V

    sget-object v0, Li0/i;->e:Li0/h;

    const-string v2, "save_b.game"

    invoke-interface {v0, v2}, Li0/h;->b(Ljava/lang/String;)Lm0/a;

    move-result-object v0

    invoke-virtual {v1, v0}, Lm0/a;->q(Lm0/a;)V

    :cond_0
    return-void
.end method

.method public r()J
    .locals 2

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v0}, Lh2/b;->L()J

    move-result-wide v0

    return-wide v0
.end method

.method public r0()V
    .locals 7

    iget-object v0, p0, Lc2/c;->f0:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->f0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0xa

    cmp-long v0, v3, v5

    if-ltz v0, :cond_0

    const/16 v0, 0xa

    invoke-static {v0}, Lk2/k;->k(I)V

    iget-object v0, p0, Lc2/c;->e0:Lb2/i;

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->f0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    invoke-static {}, Ld2/b;->s()V

    :cond_0
    return-void
.end method

.method public s()J
    .locals 2

    sget-object v0, LW1/b;->t:Lf2/i;

    iget-object v0, v0, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v0}, Lh2/a;->N()I

    move-result v0

    int-to-long v0, v0

    return-wide v0
.end method

.method public s0()V
    .locals 7

    iget-object v0, p0, Lc2/c;->h0:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->h0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0xa

    cmp-long v0, v3, v5

    if-ltz v0, :cond_0

    const/16 v0, 0xa

    invoke-static {v0}, Lk2/k;->k(I)V

    iget-object v0, p0, Lc2/c;->g0:Lb2/i;

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->h0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    invoke-static {}, Ld2/b;->s()V

    :cond_0
    return-void
.end method

.method public t()J
    .locals 2

    invoke-static {}, Le2/b;->s()I

    move-result v0

    int-to-long v0, v0

    return-wide v0
.end method

.method public t0()V
    .locals 7

    iget-object v0, p0, Lc2/c;->j0:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->j0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0xa

    cmp-long v0, v3, v5

    if-ltz v0, :cond_0

    const/16 v0, 0xa

    invoke-static {v0}, Lk2/k;->k(I)V

    iget-object v0, p0, Lc2/c;->i0:Lb2/i;

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->j0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    invoke-static {}, Ld2/b;->s()V

    :cond_0
    return-void
.end method

.method public u()Lb2/d;
    .locals 1

    invoke-static {}, Lk2/h;->j()Lb2/d;

    move-result-object v0

    return-object v0
.end method

.method public u0()V
    .locals 7

    iget-object v0, p0, Lc2/c;->l0:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->l0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0xa

    cmp-long v0, v3, v5

    if-ltz v0, :cond_0

    const/16 v0, 0xa

    invoke-static {v0}, Lk2/k;->k(I)V

    iget-object v0, p0, Lc2/c;->k0:Lb2/i;

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->l0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    invoke-static {}, Ld2/b;->s()V

    :cond_0
    return-void
.end method

.method public v()Lb2/d;
    .locals 5

    new-instance v0, Lb2/d;

    iget-object v1, p0, Lc2/c;->b:Lc2/g;

    iget-object v1, v1, Lc2/g;->a:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    invoke-direct {v0, v1, v2}, Lb2/d;-><init>(J)V

    iget-object v1, p0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v1}, Lc2/k;->o()J

    move-result-wide v1

    const-wide/16 v3, 0x1

    add-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    const-wide/16 v1, 0x64

    invoke-virtual {v0, v1, v2}, Lb2/d;->a(J)V

    return-object v0
.end method

.method public v0()V
    .locals 7

    iget-object v0, p0, Lc2/c;->n0:Lb2/i;

    const-wide/16 v1, 0x1

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->n0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0xa

    cmp-long v0, v3, v5

    if-ltz v0, :cond_0

    const/16 v0, 0xa

    invoke-static {v0}, Lk2/k;->k(I)V

    iget-object v0, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v0, v1, v2}, Lb2/i;->a(J)V

    iget-object v0, p0, Lc2/c;->n0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->b()V

    invoke-static {}, Ld2/b;->s()V

    :cond_0
    return-void
.end method

.method public w()Lb2/d;
    .locals 5

    new-instance v0, Lb2/d;

    const-wide/16 v1, 0xa

    invoke-direct {v0, v1, v2}, Lb2/d;-><init>(J)V

    iget-object v1, p0, Lc2/c;->m0:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v3, 0x1

    sub-long v3, v1, v3

    long-to-double v3, v3

    long-to-double v1, v1

    invoke-static {v1, v2}, Ljava/lang/Math;->sqrt(D)D

    move-result-wide v1

    mul-double v3, v3, v1

    const-wide/high16 v1, 0x4008000000000000L    # 3.0

    mul-double v3, v3, v1

    double-to-long v1, v3

    const-wide/16 v3, 0x384

    add-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lb2/d;->t(J)V

    iget-object v1, p0, Lc2/c;->k:Lb2/d;

    invoke-virtual {v1}, Lb2/d;->g()I

    move-result v1

    invoke-virtual {v0, v1}, Lb2/d;->A(I)V

    return-object v0
.end method

.method public x()Lb2/d;
    .locals 8

    invoke-virtual {p0}, Lc2/c;->y()Lb2/d;

    move-result-object v0

    const-wide/16 v1, 0x2

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    sget-object v3, LW1/b;->v:Lc2/d;

    const/16 v4, 0x5e

    invoke-virtual {v3, v4}, Lc2/d;->e(I)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0xc1

    cmp-long v7, v3, v5

    if-ltz v7, :cond_0

    const-wide/16 v1, 0x80

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    goto :goto_0

    :cond_0
    sget-object v3, LW1/b;->v:Lc2/d;

    const/16 v4, 0x50

    invoke-virtual {v3, v4}, Lc2/d;->e(I)Z

    move-result v3

    if-eqz v3, :cond_1

    iget-object v3, p0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0xa8

    cmp-long v7, v3, v5

    if-ltz v7, :cond_1

    const-wide/16 v1, 0x20

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    goto :goto_0

    :cond_1
    sget-object v3, LW1/b;->v:Lc2/d;

    const/16 v4, 0x49

    invoke-virtual {v3, v4}, Lc2/d;->e(I)Z

    move-result v3

    if-eqz v3, :cond_2

    iget-object v3, p0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0x8f

    cmp-long v7, v3, v5

    if-ltz v7, :cond_2

    const-wide/16 v1, 0x8

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    goto :goto_0

    :cond_2
    sget-object v3, LW1/b;->v:Lc2/d;

    const/16 v4, 0x40

    invoke-virtual {v3, v4}, Lc2/d;->e(I)Z

    move-result v3

    if-eqz v3, :cond_3

    iget-object v3, p0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v3}, Lb2/i;->d()J

    move-result-wide v3

    const-wide/16 v5, 0x76

    cmp-long v7, v3, v5

    if-ltz v7, :cond_3

    invoke-virtual {v0, v1, v2}, Lb2/d;->r(J)V

    :cond_3
    :goto_0
    return-object v0
.end method

.method public x0()V
    .locals 5

    iget-object v0, p0, Lc2/c;->y0:Lb2/i;

    invoke-virtual {v0}, Lb2/i;->d()J

    move-result-wide v0

    const-wide/16 v2, 0xc4e

    cmp-long v4, v0, v2

    if-gez v4, :cond_0

    iget-object v0, p0, Lc2/c;->y0:Lb2/i;

    invoke-virtual {v0, v2, v3}, Lb2/i;->c(J)V

    :cond_0
    return-void
.end method

.method public y()Lb2/d;
    .locals 23

    move-object/from16 v0, p0

    iget-object v1, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v1}, Lc2/g;->r()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    const-wide/16 v5, 0xf

    cmp-long v7, v1, v5

    if-gez v7, :cond_0

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    invoke-virtual {v1, v3, v4}, Lb2/d;->w(J)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    return-object v1

    :cond_0
    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    const-wide/16 v7, 0x4

    invoke-virtual {v1, v7, v8}, Lb2/d;->w(J)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    iget-object v2, v0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v2}, Lc2/g;->r()J

    move-result-wide v9

    sub-long/2addr v9, v5

    invoke-virtual {v1, v9, v10}, Lb2/d;->t(J)V

    iget-object v1, v0, Lc2/c;->s:Lb2/d;

    const-wide/16 v9, 0x2

    invoke-virtual {v1, v9, v10}, Lb2/d;->w(J)V

    sget-object v1, LW1/b;->v:Lc2/d;

    const/16 v2, 0x5e

    invoke-virtual {v1, v2}, Lc2/d;->e(I)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v11, 0xc1

    cmp-long v13, v1, v11

    if-ltz v13, :cond_1

    iget-object v1, v0, Lc2/c;->s:Lb2/d;

    iget-object v2, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v13

    sub-long/2addr v13, v11

    const-wide/16 v11, 0x8

    mul-long v13, v13, v11

    const-wide/16 v11, 0x1a2

    add-long/2addr v13, v11

    invoke-virtual {v1, v13, v14}, Lb2/d;->t(J)V

    goto/16 :goto_0

    :cond_1
    sget-object v1, LW1/b;->v:Lc2/d;

    const/16 v2, 0x50

    invoke-virtual {v1, v2}, Lc2/d;->e(I)Z

    move-result v1

    const-wide/16 v11, 0xa8

    if-eqz v1, :cond_2

    iget-object v1, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    cmp-long v13, v1, v11

    if-ltz v13, :cond_2

    iget-object v1, v0, Lc2/c;->s:Lb2/d;

    iget-object v2, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v13

    sub-long/2addr v13, v11

    const-wide/16 v11, 0x6

    mul-long v13, v13, v11

    const-wide/16 v11, 0x10c

    add-long/2addr v13, v11

    invoke-virtual {v1, v13, v14}, Lb2/d;->t(J)V

    goto :goto_0

    :cond_2
    sget-object v1, LW1/b;->v:Lc2/d;

    const/16 v2, 0x49

    invoke-virtual {v1, v2}, Lc2/d;->e(I)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v13, 0x8f

    cmp-long v15, v1, v13

    if-ltz v15, :cond_3

    iget-object v1, v0, Lc2/c;->s:Lb2/d;

    iget-object v2, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v15

    sub-long/2addr v15, v13

    mul-long v15, v15, v7

    add-long/2addr v11, v15

    invoke-virtual {v1, v11, v12}, Lb2/d;->t(J)V

    goto :goto_0

    :cond_3
    sget-object v1, LW1/b;->v:Lc2/d;

    const/16 v2, 0x40

    invoke-virtual {v1, v2}, Lc2/d;->e(I)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v11, 0x76

    cmp-long v13, v1, v11

    if-ltz v13, :cond_4

    iget-object v1, v0, Lc2/c;->s:Lb2/d;

    iget-object v2, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v13

    sub-long/2addr v13, v11

    mul-long v13, v13, v9

    add-long/2addr v13, v11

    invoke-virtual {v1, v13, v14}, Lb2/d;->t(J)V

    goto :goto_0

    :cond_4
    iget-object v1, v0, Lc2/c;->s:Lb2/d;

    iget-object v2, v0, Lc2/c;->l:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v11

    invoke-virtual {v1, v11, v12}, Lb2/d;->t(J)V

    :goto_0
    iget-object v1, v0, Lc2/c;->t:Lb2/d;

    const-wide/16 v11, 0x5

    invoke-virtual {v1, v11, v12}, Lb2/d;->w(J)V

    iget-object v1, v0, Lc2/c;->t:Lb2/d;

    iget-object v2, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v2}, Lc2/k;->q()J

    move-result-wide v11

    invoke-virtual {v1, v11, v12}, Lb2/d;->t(J)V

    iget-object v1, v0, Lc2/c;->u:Lb2/d;

    invoke-virtual {v1, v7, v8}, Lb2/d;->w(J)V

    iget-object v1, v0, Lc2/c;->u:Lb2/d;

    iget-object v2, v0, Lc2/c;->a:Lc2/k;

    invoke-virtual {v2}, Lc2/k;->q()J

    move-result-wide v7

    invoke-virtual {v1, v7, v8}, Lb2/d;->t(J)V

    iget-object v1, v0, Lc2/c;->i0:Lb2/i;

    invoke-virtual {v1}, Lb2/i;->d()J

    move-result-wide v1

    const-wide/16 v7, 0x1

    sub-long/2addr v1, v7

    sget-object v11, LW1/b;->t:Lf2/i;

    iget-object v11, v11, Lf2/i;->x0:Lh2/b;

    invoke-virtual {v11}, Lh2/b;->M()J

    move-result-wide v11

    cmp-long v13, v11, v3

    if-nez v13, :cond_5

    iget-object v3, v0, Lc2/c;->v:Lb2/d;

    invoke-virtual {v3, v5, v6}, Lb2/d;->w(J)V

    iget-object v3, v0, Lc2/c;->v:Lb2/d;

    invoke-virtual {v3, v1, v2}, Lb2/d;->t(J)V

    goto :goto_2

    :cond_5
    iget-object v13, v0, Lc2/c;->v:Lb2/d;

    invoke-virtual {v13, v7, v8}, Lb2/d;->w(J)V

    const/4 v7, 0x0

    :goto_1
    int-to-long v13, v7

    const-wide/16 v15, 0x32

    div-long v17, v1, v15

    cmp-long v8, v13, v17

    if-gtz v8, :cond_6

    iget-object v8, v0, Lc2/c;->x:Lb2/d;

    add-int/lit8 v15, v7, -0x4

    int-to-long v5, v15

    mul-long v5, v5, v11

    mul-long v5, v5, v9

    invoke-static {v5, v6, v3, v4}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v5

    const-wide/16 v15, 0xf

    add-long/2addr v5, v15

    invoke-virtual {v8, v5, v6}, Lb2/d;->w(J)V

    iget-object v5, v0, Lc2/c;->x:Lb2/d;

    const-wide/16 v17, 0x32

    mul-long v13, v13, v17

    sub-long v17, v1, v13

    const-wide/16 v19, 0x0

    const-wide/16 v21, 0x32

    invoke-static/range {v17 .. v22}, Lr0/b;->c(JJJ)J

    move-result-wide v13

    invoke-virtual {v5, v13, v14}, Lb2/d;->t(J)V

    iget-object v5, v0, Lc2/c;->v:Lb2/d;

    iget-object v6, v0, Lc2/c;->x:Lb2/d;

    invoke-virtual {v5, v6}, Lb2/d;->s(Lb2/d;)V

    add-int/lit8 v7, v7, 0x1

    move-wide v5, v15

    goto :goto_1

    :cond_6
    :goto_2
    iget-object v3, v0, Lc2/c;->w:Lb2/d;

    const-wide/16 v4, 0xa

    invoke-virtual {v3, v4, v5}, Lb2/d;->w(J)V

    iget-object v3, v0, Lc2/c;->w:Lb2/d;

    invoke-virtual {v3, v1, v2}, Lb2/d;->t(J)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    iget-object v2, v0, Lc2/c;->s:Lb2/d;

    invoke-virtual {v1, v2}, Lb2/d;->s(Lb2/d;)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    iget-object v2, v0, Lc2/c;->t:Lb2/d;

    invoke-virtual {v1, v2}, Lb2/d;->s(Lb2/d;)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    iget-object v2, v0, Lc2/c;->v:Lb2/d;

    invoke-virtual {v1, v2}, Lb2/d;->s(Lb2/d;)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    iget-object v2, v0, Lc2/c;->u:Lb2/d;

    invoke-virtual {v1, v2}, Lb2/d;->e(Lb2/d;)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    iget-object v2, v0, Lc2/c;->w:Lb2/d;

    invoke-virtual {v1, v2}, Lb2/d;->e(Lb2/d;)V

    sget-object v1, LW1/b;->v:Lc2/d;

    iget-object v1, v1, Lc2/d;->j:LX1/c;

    const/16 v2, 0x12c

    invoke-virtual {v1, v2}, LX1/c;->m(I)Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-static {}, Lw2/f;->A()Z

    move-result v1

    if-nez v1, :cond_7

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    const-wide/16 v2, 0x64

    invoke-virtual {v1, v2, v3}, Lb2/d;->r(J)V

    :cond_7
    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->j:Lf2/u;

    iget-object v2, v2, Lf2/u;->C:Lq2/p;

    invoke-virtual {v2}, Lq2/p;->b()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lb2/d;->r(J)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->j:Lf2/u;

    iget-object v2, v2, Lf2/u;->C:Lq2/p;

    invoke-virtual {v2}, Lq2/p;->c()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lb2/d;->r(J)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->j:Lf2/u;

    iget-object v2, v2, Lf2/u;->C:Lq2/p;

    invoke-virtual {v2}, Lq2/p;->d()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lb2/d;->r(J)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->j:Lf2/u;

    iget-object v2, v2, Lf2/u;->C:Lq2/p;

    invoke-virtual {v2}, Lq2/p;->e()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lb2/d;->r(J)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    sget-object v2, LW1/b;->t:Lf2/i;

    iget-object v2, v2, Lf2/i;->y0:Lh2/a;

    invoke-virtual {v2}, Lh2/a;->v()Lb2/d;

    move-result-object v2

    invoke-virtual {v1, v2}, Lb2/d;->s(Lb2/d;)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    iget-object v2, v0, Lc2/c;->k:Lb2/d;

    invoke-virtual {v2}, Lb2/d;->g()I

    move-result v2

    invoke-virtual {v1, v2}, Lb2/d;->A(I)V

    iget-object v1, v0, Lc2/c;->r:Lb2/d;

    return-object v1
.end method

.method public y0()Z
    .locals 1

    iget v0, p0, Lc2/c;->G0:I

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public z()Ljava/lang/String;
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lc2/c;->b:Lc2/g;

    invoke-virtual {v1}, Lc2/g;->r()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "#"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lc2/c;->b:Lc2/g;

    iget-object v2, v2, Lc2/g;->a:Lb2/i;

    invoke-virtual {v2}, Lb2/i;->d()J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v1}, Lb2/d;->i()J

    move-result-wide v1

    const-wide/32 v3, 0x3b9aca00

    mul-long v1, v1, v3

    iget-object v3, p0, Lc2/c;->m:Lb2/d;

    invoke-virtual {v3}, Lb2/d;->f()J

    move-result-wide v3

    add-long/2addr v1, v3

    neg-long v1, v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "#0"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public z0()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lc2/c;->d0:Z

    return-void
.end method
